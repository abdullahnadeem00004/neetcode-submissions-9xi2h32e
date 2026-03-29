class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int newprofit=0;
        for(int i=0; i< (int)prices.size(); i++)
        {
            
            for (int j=i+1; j< (int)prices.size(); j++){
                
                profit = prices[j] - prices[i];
                if (profit >= 0 && profit > newprofit ){
                    newprofit = profit;
                    
                }
            }
            
        }
        return newprofit;
    }

};