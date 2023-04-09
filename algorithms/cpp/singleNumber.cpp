// Source : https://leetcode.cn/problems/single-number/
// Author : guoshuai wei
// Date   : 2023-04-09
// 136

#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int result = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        result ^= nums[i];
    }
    return result;
}