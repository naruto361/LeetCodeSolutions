```
2D KNAPSACK
```
```cpp
class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<pair<int,int>> p;//zeros and ones
        for(string &s:strs)
        {
            int ones=0,zeros=0;
            for(char &c:s)
            {
                if(c=='0') zeros++;
                else ones++;
            }
            if(zeros<=m && ones<=n)
            p.push_back({zeros,ones});
        }
        //sort(p.begin(),p.end());
        vector<vector<int>> dp(m+1,vector<int> (n+1,0));
        for(int i=0;i<p.size();i++)
        {
            for(int j=m;j>=0;j--)
            {
                for(int k=n;k>=0;k--)
                {
                    if(j-p[i].first>=0 && k-p[i].second>=0)
                    {
                        dp[j][k]=max(dp[j][k],1+dp[j-p[i].first][k-p[i].second]);
                    }
                }
            }
        }
        return dp[m][n];
    }
};
```
