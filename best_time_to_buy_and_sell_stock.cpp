class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxp = 0;
        int minpr = prices[0];

        for(int i=1;i<n;i++)
        {
            if(prices[i]<minpr) minpr = prices[i];

            int profit = prices[i] - minpr;
            if(profit > maxp) maxp = profit;
        }
        return maxp;
        
    }
};