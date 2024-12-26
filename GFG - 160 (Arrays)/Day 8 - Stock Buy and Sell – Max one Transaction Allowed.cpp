class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int buyPrice = prices[0], maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > buyPrice) { 
                maxProfit = max(maxProfit, prices[i] - buyPrice); 
            } else {
                buyPrice = prices[i]; 
            }
        }
        return maxProfit;
    }
};
