// Source : https://leetcode.cn/problems/binary-tree-level-order-traversal/
// Author : guoshuai wei
// Date   : 2023-04-03
// 102

#include<vector>
#include "tree.h"
using namespace std;

vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> result;
    if (root == nullptr) {
        return result;
    }
    vector<TreeNode *> temp;
    temp.push_back(root);
    while(!temp.empty()) {
        vector<int> r;
        vector<TreeNode *> t;
        for (int i = 0; i < temp.size(); i++) {
            r.push_back(temp[i]->val);
            if (temp[i]->left != nullptr) {
                t.push_back(temp[i]->left);
            }
            if (temp[i]->right != nullptr) {
                t.push_back(temp[i]->right);
            }
        }
        result.push_back(r);
        temp = t;
    }
    return result;
}

void dns(TreeNode* root, int level, vector<vector<int>>& target) {
    if (root == nullptr) {
        return;
    }
    if (level >= target.size()) {
        target.push_back(vector<int>());
    }
    target[level].push_back(root->val);
    dns(root->left, level + 1, target);
    dns(root->right, level + 1, target);
}

vector<vector<int>> levelOrder1(TreeNode* root) {
    vector<vector<int>> result;
    dns(root, 0, result);
    return result;
}
