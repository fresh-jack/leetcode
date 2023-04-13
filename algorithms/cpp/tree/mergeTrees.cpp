// Source : https://leetcode.cn/problems/merge-two-binary-trees/
// Author : guoshuai wei
// Date   : 2023-04-03
// 617

#include "tree.h"

TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
    if (root1 == nullptr) {
        return root2;
    }
    if (root2 == nullptr) {
        return root1;
    }
    root1->val = root1->val + root2->val;
    root1->left = mergeTrees(root1->left, root2->left);
    root1->right = mergeTrees(root1->right, root2->right);
    return root1;
}