// Source : https://leetcode.cn/problems/B1IidL/
// Author : guoshuai wei
// Date   : 2023-04-22
// 69
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int n = arr.size();
    int result = - 1;
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i+1]) {
            result = i;
            break;
        }
    }
    return result;
}