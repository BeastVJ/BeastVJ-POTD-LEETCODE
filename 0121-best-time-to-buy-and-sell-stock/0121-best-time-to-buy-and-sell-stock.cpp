class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
 
            int buy = prices[0];
        for(int i = 1; i < n; i++){
            int currprofit = 0;
            if(prices[i] < buy){
                buy = prices[i];
                
            }
            currprofit =  prices[i] - buy;
            if(currprofit > profit){
                profit = currprofit;
            }
        }
        return profit;
    }
};