/*
https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0;
        int j = n - 1;
        while(i<j)
        {
            if ( numbers[i]+numbers[j]>target) j--;
            else if (numbers[i]+numbers[j]<target) i++;
            else return {i+1,j+1};
        }
        return {};
    }
};

/*
T.C : O(n)
S.C : O(1)
*/