// Source : https://leetcode.cn/problems/maximum-depth-of-binary-tree/
// Author : guoshuai wei
// Date   : 2023-04-07
// 104

#include "tree.h"
#include <algorithm>
#include <vector>
using namespace std;

int maxDepth(TreeNode* root) { 
    if (root == nullptr) {
        return 0;
    }
    return max(maxDepth(root->left), maxDepth(root->right)) + 1;
}

int maxDepth1(TreeNode* root) { 
    if (root == nullptr) {
        return 0;
    }
    int result = 0;
    vector<TreeNode *> temp;
    temp.push_back(root);
    while (!temp.empty()) {
        vector<TreeNode *> t;
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i]->left != nullptr) {
                t.push_back(temp[i]->left);
            }
            if (temp[i]->right != nullptr) {
                t.push_back(temp[i]->right);
            }
        }
        temp = t;
        result++;
    }
    return result;
}