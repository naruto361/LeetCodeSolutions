```cpp
class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& d){
        int m=d.size() , n=d[0].size();
        vector<vector<int>> dp(m,vector<int> (n,0));
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(i==m-1 && j==n-1)
                {
                    dp[i][j]=1-d[i][j];
                }
                else if(i==m-1)
                {
                    dp[i][j]=dp[i][j+1]-d[i][j];
                }
                else if(j==n-1)
                {
                    dp[i][j]=dp[i+1][j]-d[i][j];
                }
                else
                {
                    dp[i][j]=min(dp[i+1][j],dp[i][j+1])-d[i][j];
                }
                dp[i][j]=max(1,dp[i][j]);
            }
        }
        return dp[0][0];
    }
};
```
