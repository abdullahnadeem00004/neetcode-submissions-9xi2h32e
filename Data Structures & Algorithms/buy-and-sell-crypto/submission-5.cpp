class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int minBuy = prices[0];

        for(int& sell : prices){
            maxprofit = max(maxprofit, sell - minBuy);
            minBuy = min (minBuy , sell);
        }
        return maxprofit;
    }

};