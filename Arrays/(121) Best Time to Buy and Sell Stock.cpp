class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxBuy=0;
        int minBuy=prices[0];

        for(int sell:prices){
            int profit=sell-minBuy;
            maxBuy=max(maxBuy,profit);
            minBuy=min(minBuy,sell);
        }

        return maxBuy;
    }
};