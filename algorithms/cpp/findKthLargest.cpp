// Source : https://leetcode.cn/problems/kth-largest-element-in-an-array/description/
// Author : guoshuai wei
// Date   : 2023-04-19
// 215

#include <vector>
#include <algorithm>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    return nums[nums.size() - k];
}