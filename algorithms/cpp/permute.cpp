// Source : https://leetcode.cn/problems/permutations/description/
// Author : guoshuai wei
// Date   : 2023-04-18
// 46
#include <vector>
#include <functional>
using namespace std;

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> path;
    function<void(vector<int>&, vector<int>&)> dfs = [&](vector<int>& nums, vector<int>& path) {
        if (nums.size() == path.size()) {
            result.emplace_back(path);
        }
        for (int i = 0; i < nums.size(); i++) {
            bool contain = false;
            for(auto& x : path) {
                if (x == nums[i]) {
                    contain = true;
                    break;
                }
            }
            if (!contain) {
                path.emplace_back(nums[i]);
                dfs(nums, path);
                path.pop_back();
            }
        }
        return;
    };

    dfs(nums, path);
    return result;
}

// 
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    function<void(vector<int>&, int, int)> dfs = [&](vector<int> nums, int begin, int end) {
        if (begin == end) {
            result.emplace_back(nums);
        }
        for (int i = begin; i<= end; i++) {
            swap(nums[i], nums[begin]);
            dfs(nums, begin+1, end);
            swap(nums[i], nums[begin]);
        }
        return;
    };

    dfs(nums, 0, nums.size() - 1);

    return result;
}