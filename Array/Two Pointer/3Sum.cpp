/*
https://leetcode.com/problems/3sum/
*/

/*
When we are told to find out indecies , we can't apply sorting
But when we are told to find out the elements , we can apply sorting
To avoid duplicates, we will check if left == left+1 &  right == right -1 & nums[i]==nums[i-1]
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        if(n<3) return {};

        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
            int target = -nums[i];
            int left = i + 1;
            int right = n - 1;
            while(left<right)
            {
                int sum = nums[left]+nums[right];
                if(sum>target) right--;
                else if(sum<target) left++;
                else
                {
                    result.push_back({nums[i],nums[left],nums[right]});
                    while(left<right && nums[left]==nums[left+1]) left++;
                    while(left<right && nums[right]==nums[right-1]) right--;
                    left++;
                    right--;
                }

            }
        }
        return result;
    }
};

/*
T.C : O(n^2)
S.C : O(1)
*/