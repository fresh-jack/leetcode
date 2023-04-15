// Source : https://leetcode.cn/problems/best-time-to-buy-and-sell-stock/
// Author : guoshuai wei
// Date   : 2023-04-15
// 121



int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];
    int result = 0;
    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            result = max(result, prices[i] - minPrice);
        }
    }
    return result;
}