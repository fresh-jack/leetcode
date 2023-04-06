// Source : https://leetcode.cn/problems/symmetric-tree/
// Author : guoshuai wei
// Date   : 2023-04-06
// 101

#include "tree.h"

bool isSymmetric(TreeNode* root) {
    return isSame(root->left, root->right);
}

bool isSame(TreeNode* t1, TreeNode* t2) {
    if (t1 == nullptr && t2 == nullptr) {
        return true;
    }
    if (t1 == nullptr || t2 ==nullptr) {
        return false;
    }
    return t1->val == t2->val && isSame(t1->left, t2->right) && isSame(t1->right, t2->left);
}