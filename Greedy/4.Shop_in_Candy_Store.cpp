class Solution {
public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {

        sort(prices.begin(), prices.end());

        int n = prices.size();

        int minAmount = 0;
        int maxAmount = 0;

        // Minimum Cost
        int i = 0;
        int j = n - 1;

        while (i <= j) {
            minAmount += prices[i];
            i++;
            j -= k;
        }

        // Maximum Cost
        i = n - 1;
        j = 0;

        while (j <= i) {
            maxAmount += prices[i];
            i--;
            j += k;
        }

        return {minAmount, maxAmount};
    }
};

