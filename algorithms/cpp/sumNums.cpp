// Source : https://leetcode.cn/problems/qiu-12n-lcof/description/
// Author : guoshuai wei
// Date   : 2023-04-20
// 64

int sumNums(int n) {
    return n ==0 ? 0 : n + sumNums(n - 1);
}

int sumNums1(int n) {
    n && (n += sumNums1(n - 1));
    return n;
}
