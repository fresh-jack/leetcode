// Source : https://leetcode.cn/problems/invert-binary-tree/
// Author : guoshuai wei
// Date   : 2023-04-03
// 226

#include "tree.h"
#include <stack>
using namespace std;

//
TreeNode* invertTree(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;
    return root;
}

// 
TreeNode* invertTree1(TreeNode* root) {
    if (root == nullptr) {
        return root;
    }
    stack<TreeNode *> temp;
    temp.push(root);
    while(!temp.empty()) {
        for (int i = 0; i < temp.size(); i++) {
            TreeNode* cur = temp.top();
            temp.pop();
            TreeNode* t = cur->left;
            cur->left = cur->right;
            cur->right = t;
            if (cur->left != nullptr) {
                temp.push(cur->left);
            }
            if (cur->right != nullptr) {
                temp.push(cur->right);
            }
        }
    }
    return root;
}
