// Source : https://leetcode.cn/problems/search-in-rotated-sorted-array/
// Author : guoshuai wei
// Date   : 2023-04-14
// 33

#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
      int left = 0, right = nums.size() - 1;
      while(left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
          return mid;
        }
        if (nums[0] <= nums[mid]) {
          if (nums[0] <= target && target < nums[mid]) {
            right = mid - 1;
          } else {
          left = mid + 1;
          }
        } else {
          if (nums[mid] < target && target <= nums[nums.size()-1]) {
            left = mid + 1;
          } else {
            right = mid - 1;
          }
        }
      }
      return -1;
}
