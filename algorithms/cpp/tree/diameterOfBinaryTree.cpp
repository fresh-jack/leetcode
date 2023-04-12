// Source : https://leetcode.cn/problems/diameter-of-binary-tree/
// Author : guoshuai wei
// Date   : 2023-04-03
// 543

#include "tree.h"
#include<functional>
#include<algorithm>
using namespace std;

int diameterOfBinaryTree(TreeNode* root) {
    int result = 0;
    function<int(TreeNode *)> depth = [&](TreeNode *root) -> int
    {
        if (root == nullptr) {
            return 0;
        }
        int L = depth(root->left);
        int R = depth(root->right);
        result = max(result, L + R + 1);
        return max(L, R) + 1;
    };
    depth(root);
    return result - 1;
}