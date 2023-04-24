// Source : https://leetcode.cn/problems/iIQa4I/solutions/1398941/mei-ri-wen-du-by-leetcode-solution-vh9j/
// Author : guoshuai wei
// Date   : 2023-04-24
// 38
#include <vector>
#include <stack>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) { 
    int n = temperatures.size();
    vector<int> ans(n);
    stack<int> s;
    for(int i = 0; i < n; i++) {
        while(!s.empty() && temperatures[i] > temperatures[s.top()]) {
            int previousIndex = s.top();
            ans[previousIndex] = i - previousIndex;
            s.pop();
        }
        s.push(i);
    }
    return ans;
 }