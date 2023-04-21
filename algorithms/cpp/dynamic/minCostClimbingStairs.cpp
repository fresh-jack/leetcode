// Source : https://leetcode.cn/problems/GzCJIP/
// Author : guoshuai wei
// Date   : 2023-04-21
// 88
#include <vector>
#include <algorithm>
using namespace std;

int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    vector<int> dp(n+1);
    dp[0] = dp[1] = 0;
    for(int i = 2; i <= n; i++) {
        dp[i] = min(dp[i - 1]+cost[i- 1], dp[i - 2] +  cost[i - 2]);
    }
    return dp[n];
}

int minCostClimbingStairs1(vector<int>& cost) {
    int n = cost.size();
    int prev = 0, curr = 0;
    for (int i = 2; i <=n; i++) {
        int next = min(curr + cost[i - 1], prev + cost[i - 2]);
        prev = curr;
        curr = next;
    }
    return curr;
}