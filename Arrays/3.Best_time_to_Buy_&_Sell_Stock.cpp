class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int Buy_Stock = prices[0];

        for(int i=1; i<prices.size(); i++){
            if(Buy_Stock > prices[i]){
                Buy_Stock = prices[i];
            }
            int curr_profit = prices[i] - Buy_Stock;
            maxPro = max(curr_profit , maxPro);
            
        }
        return maxPro;
    }
};
