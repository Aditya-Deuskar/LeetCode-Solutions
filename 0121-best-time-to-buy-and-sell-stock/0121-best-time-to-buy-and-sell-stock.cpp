class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2) {
            return 0;
        }

        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int i = 0; i < prices.size(); i++) {
            // Update the minimum price
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }
            // Calculate the potential profit
            int potentialProfit = prices[i] - minPrice;
            // Update the maximum profit
            if (potentialProfit > maxProfit) {
                maxProfit = potentialProfit;
            }
        }

        return maxProfit;
    }
};