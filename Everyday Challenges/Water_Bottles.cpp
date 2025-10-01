/*
https://leetcode.com/problems/water-bottles/
*/
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       int drinkedBottles = 0;
       int emptiedBottles = 0;
        while(numBottles>0)
        {
            drinkedBottles += numBottles;
            emptiedBottles += numBottles;

            numBottles = emptiedBottles/numExchange;
            emptiedBottles = emptiedBottles%numExchange;
        }
        return drinkedBottles;
    }
};

/*
T.C : O(log(numBottles)) / O(lognumExchange​(numBottles)​(numBottles))
S.C : O(1)
*/
