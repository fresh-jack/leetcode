// Source : https://leetcode.cn/problems/counting-bits/description/
// Author : guoshuai wei
// Date   : 2023-04-09
// 338
#include <vector>
using namespace std;

vector<int> countBits(int n) {
    vector<int> result;
    result.reserve(n + 1);
    for (int i = 0; i <= n; i++) {
        result.push_back(count(i));
    }
    return result;
}

int count(int n) {
    int result = 0;
    while (n > 0) {
        result++;
        n &= n - 1;
    }
    return result;
}

// TODO:
vector<int> countBits1(int n) {
    vector<int> result;
    result.resize(n + 1);
    int highBit = 0;
    for (int i = 1; i <= n; i++) {
        if (i & (i - 1) == 0) {
            highBit = i;
        }
        result[i] = result[i - highBit] + 1;
    }
    return result;
}