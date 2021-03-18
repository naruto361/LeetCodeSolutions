## [Best Time to Buy and Sell Stock with Transaction Fee](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/)
```cpp
int maxProfit(vector<int>& prices, int fee) {
        int ans=0;
        if(prices.size()<2) return 0;
        int mini=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            mini=min(mini,prices[i]);
            if(prices[i]>=mini+fee)
            {
                ans+=prices[i]-mini-fee;mini=prices[i]-fee;
            }    
        }
        return ans;
    }
```
