```cpp
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if(k==0 || prices.size()<2) return 0;
        if(k>=prices.size()/2)
        {
            int ans=0;
            for(int i=1;i<prices.size();i++)
            {
                ans += max(0,prices[i]-prices[i-1]);
            }
            return ans;
        }
        vector<int> buy(k+1,-1e6);
        vector<int> sell(k+1,0);
        
        for(int &price:prices)
        {
            for(int i=1;i<=k;i++)
            {
                buy[i]=max(buy[i],sell[i-1]-price);
                sell[i]=max(sell[i],buy[i]+price);
            }
        }
        //cout<<buy[1]<<' '<<sell[1]<<' '<<buy[2]<<' '<<sell[2]<<'\n';
        return sell[k];
    }
};
```

```cpp
class Solution {
public:
    int dp[1001][101][2];
    int solve(vector<int> &prices,int i,int k,int buy)
    {
        if(i==prices.size() || (k==0 && buy==1)) return 0;
        if(dp[i][k][buy]!=-1) 
            return dp[i][k][buy];
        int profit=0;
        if(buy)
        {
            profit=max( solve(prices,i+1,k-1,0)-prices[i] , solve(prices,i+1,k,1) );
        }
        else
        {
            profit=max( solve(prices,i+1,k,1)+prices[i] , solve(prices,i+1,k,0) );
        }
        return dp[i][k][buy]=profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        memset(dp,-1,sizeof(dp));
        return solve(prices,0,k,1);
    }
};
```
