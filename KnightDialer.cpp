class Solution {
public:
    int knightDialer(int n) {
        int m=1e9+7;
        vector<vector<int>> dp(n+1,vector<int> (10,0));
        for(int i=0;i<10;i++) dp[1][i]=1;
        for(int i=2;i<=n;i++)
        {
            dp[i][0]=(dp[i-1][4]%m + dp[i-1][6]%m)%m;
            dp[i][1]=(dp[i-1][6]%m + dp[i-1][8]%m)%m;
            dp[i][2]=(dp[i-1][7]%m + dp[i-1][9]%m)%m;
            dp[i][3]=(dp[i-1][4]%m + dp[i-1][8]%m)%m;
            dp[i][4]=((dp[i-1][3]%m + dp[i-1][9]%m)%m + dp[i-1][0]%m)%m;
            dp[i][5]=0 ;
            dp[i][6]=((dp[i-1][1]%m+ dp[i-1][7]%m)%m + dp[i-1][0]%m)%m;
            dp[i][7]=(dp[i-1][2]%m + dp[i-1][6]%m)%m;
            dp[i][8]=(dp[i-1][1]%m + dp[i-1][3]%m)%m;
            dp[i][9]=(dp[i-1][4]%m + dp[i-1][2]%m)%m;
        }
        int ans=0;
        for(int i=0;i<10;i++)
        {
            ans=(ans%m + dp[n][i]%m)%m;
        }
        return ans;
    }
};
