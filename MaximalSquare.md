## [Maximal Square](https://leetcode.com/problems/maximal-square/)
```cpp
int maximalSquare(vector<vector<char>>& matrix) {
        int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int dp[300+1][300+1]={0};
        for(int i=0;i<m;i++) dp[i][0]=matrix[i][0]-'0';
        for(int j=0;j<n;j++) dp[0][j]=matrix[0][j]-'0';
        int maxi=0;
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(matrix[i][j]=='1')
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                maxi=max(maxi,dp[i][j]);
            }
        }
        for(int i=0;i<m;i++) maxi=max(maxi,dp[i][0]);
        for(int j=0;j<n;j++) maxi=max(maxi,dp[0][j]);
        return maxi*maxi;
    };
    }
```
