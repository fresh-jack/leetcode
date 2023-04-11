// Source : https://leetcode.cn/problems/shun-shi-zhen-da-yin-ju-zhen-lcof/
// Author : guoshuai wei
// Date   : 2023-04-11
// 54

#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix) {
    if (matrix.size() == 0 || matrix[0].size() == 0) {
        return {};
    }
    vector<int> result;
    int left = 0, right = matrix[0].size() - 1;
    int top = 0, bottom = matrix.size() - 1;
    while(left <= right && top <= bottom) {
        for (int i = left; i <= right; i++) {
            result.push_back(matrix[top][i]);
        }
        for (int i = top; i <= bottom; i++) {
            result.push_back(matrix[i][right]);
        }
        if (left < right && top < bottom) {
            for (int i = right - 1; i > left; i--) {
                result.push_back(matrix[bottom][i]);
            }
            for (int i = bottom; i > top; i--) {
                result.push_back(matrix[i][left]);
            }
        }
    }
    return result;
}
