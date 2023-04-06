// Source : https://leetcode.cn/problems/climbing-stairs/
// Author : guoshuai wei
// Date   : 2023-04-06
// 70

// 递归
int climbStairs(int n) {
    if (n <= 2) {
        return n;
    }
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int climbStairs1(int n) {
    int p = 0, q = 0, r = 1;
    for (int i = 1; i <= n; i++) {
        p = q;
        q = r;
        r = p + q;
    }
    return r;
}