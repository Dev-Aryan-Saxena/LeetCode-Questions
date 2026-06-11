class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int miniprcie = prices[0];

        for(int i = 1; i<prices.size(); i++){
            if (prices[i] < miniprcie){
                miniprcie = prices[i];
            }
            else{
                int calculation = prices[i] - miniprcie;
                profit = max(profit,calculation);
            }
        }
        return profit;
    }
};