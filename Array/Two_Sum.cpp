/*
https://leetcode.com/problems/two-sum/
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int com = target - nums[i];
        auto it = mp.find(com);
            if (it != mp.end()) {
            return {it->second, i};
            }

            mp[nums[i]] = i;
        }
        return {};
    }
};


/*
T.C : O(n)
S.C : O(1)
*/
