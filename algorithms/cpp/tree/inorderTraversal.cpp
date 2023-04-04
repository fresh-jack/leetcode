// Source : https://leetcode.cn/problems/binary-tree-inorder-traversal/
// Author : guoshuai wei
// Date   : 2023-04-03
// 94

#include "tree.h"
#include <vector>
#include <stack>
using namespace std;

// inorder 迭代
void inorder(TreeNode* root, vector<int>& target) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left, target);
    target.push_back(root->val);
    inorder(root->right, target);
}

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    deque<TreeNode *> temp;
    temp.push_back(root);
    while(temp.size() > 0) {
        while(root->left != nullptr) {
            temp.push_back(root);
            root = root->left;
        }

    }
}

// 
vector<int> inorderTraversal1(TreeNode* root) {
    vector<int> result;
    stack<TreeNode *> temp;
    while(root != nullptr || !temp.empty()) {
        while (root != nullptr) {
            temp.push(root);
            root = root->left;
        }
        root = temp.top();
        temp.pop();
        result.push_back(root->val);
        root = root->right;
    }
    
    return result;
}