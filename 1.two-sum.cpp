/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> table;
        vector<int> ans(2);
        ans.clear();
        for(int i = 0; i < nums.size(); i++){
            table[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); i++){
            int val = target - nums[i];
            auto iter = table.find(val);
            if(table.find(val) != table.end() && (*iter).second != i){
                ans.push_back(i);
                int val2 = (*iter).second;
                ans.push_back(val2);
                return ans;
            }
        }
        return ans;
    }
};
// @lc code=end

