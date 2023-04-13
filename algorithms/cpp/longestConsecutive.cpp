// Source : https://leetcode.cn/problems/longest-consecutive-sequence/
// Author : guoshuai wei
// Date   : 2023-04-13
// 128
#include<vector>
#include<unordered_set>
using namespace std;


int longestConsecutive(vector<int>& nums) {
  unordered_set<int> num_set;
  for (const int& num : nums) {
    num_set.insert(num);
  }
  int longestStreak = 0;
  for (const int& num : num_set) {
    if(!num_set.count(num - 1)){
      int cur = num;
      int curStreak = 1;
      while(num_set.count(cur + 1)) {
        cur += 1;
	curStreak += 1;
      }
      longestStreak = max(longestStreak, curStreak);
    }
  }
  return longestStreak;
}
