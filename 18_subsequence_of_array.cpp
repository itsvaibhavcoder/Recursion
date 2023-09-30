#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    void helper(vector<int>& nums, vector<vector<int>>& ans, vector<int>& current, int ind, int n) {
        // When generated one subsequence
        if (ind >= n) {
            ans.push_back(current);
            return;
        }
        current.push_back(nums[ind]);
        helper(nums, ans, current, ind + 1, n);
        current.pop_back();
        helper(nums, ans, current, ind + 1, n);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        int n = nums.size();
        int ind = 0;
        helper(nums, ans, current, 0, n);
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> subsets = solution.subsets(nums);

    // Print the subsets
    for (const auto& subset : subsets) {
        for (const int& num : subset) {
            cout << num << " ";
        }
        cout <<endl;
    }

    return 0;
}
