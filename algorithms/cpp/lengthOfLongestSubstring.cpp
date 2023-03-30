// Source : https://oj.leetcode.com/problems/two-sum/
// Author : guoshuai wei
// Date   : 2023-03-30
/*
Given a string s, find the length of the longest substring without repeating characters.

Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s) {
    if (s.size() == 0) {
        return 0;
    }
    unordered_set<char> temp;
    int left = 0, result = 0;
    for (int i = 0; i < s.size(); i++) {
        while(temp.find(s[i]) != temp.end()) {
            temp.erase(s[left]);
            left++;
        }
        result = max(result, i - left + 1);
        temp.insert(s[i]);
    }
    return result;
}

int main() {
    string s = "abbac";
    cout << lengthOfLongestSubstring(s) << endl;
}