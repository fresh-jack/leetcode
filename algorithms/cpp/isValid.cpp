// Source : https://leetcode.cn/problems/valid-parentheses/
// Author : guoshuai wei
// Date   : 2023-04-08
// 20
#include <string>
#include <unordered_map>
#include <stack>
using namespace std;

bool isValid(string s) {
    if (s.length() % 2 == 1) {
        return false;
    }

    unordered_map<char, char> pairs = {
        {')', '('},
        {'}', '{'},
        {']', '['},
    };

    stack<char> stk;
    for (char ch : s) {
        if (pairs.count(ch)) {
            if (stk.empty() || stk.top() != pairs[ch]) {
                return false;
            }
            stk.pop();
        } else {
            stk.push(ch);
        }
    }
    return stk.empty();
}