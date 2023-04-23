// Source : https://leetcode.cn/problems/shu-zu-zhong-shu-zi-chu-xian-de-ci-shu-ii-lcof/
// Author : guoshuai wei
// Date   : 2023-04-23
// 56
#include <vector>
#include <map>
using namespace std;

int singleNumber(vector<int>& nums) {
    map<int, int> m;
    for (auto& n : nums) {
        m[n]++;
    }
    for (auto& k : m) {
        if (k.second == 1) {
            return k.first;
        }
    }
    return 1;
}