/*
https://leetcode.com/problems/water-bottles-ii/
*/




class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int emptiedBottles = numBottles;
        int drinkedBottles = numBottles;
        numBottles = 0;
        while(emptiedBottles>=numExchange)
        {
            emptiedBottles -= numExchange;
            numExchange++;
            drinkedBottles++;
            emptiedBottles++;
        }
        return drinkedBottles;
    }
};