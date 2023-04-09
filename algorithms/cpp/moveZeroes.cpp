// Source : https://leetcode.cn/problems/move-zeroes/description/
// Author : guoshuai wei
// Date   : 2023-04-09
// 283

#include <algorithm>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int left = 0, right = 0;
    while(right < nums.size()) {
        if (nums[right] != 0) {
            swap(nums[left], nums[right]);
        }
        right++;
    }
}
