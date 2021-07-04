class Solution {
public:
    int countVowelPermutation(int n) {
        int m=1e9+7;
        if(n==1) return 5;
        if(n==2) return 10;
        int a=0,e=1,i=2,o=3,u=4;
        vector<vector<int>> dp(n+1,vector<int> (5,0));
        for(int j=0;j<5;j++)    dp[1][j]=1;
        for(int j=2;j<=n;j++)
        {
            dp[j][a]+=((dp[j-1][e]%m + dp[j-1][i]%m)%m + dp[j-1][u]%m )%m;
            dp[j][e]+=(dp[j-1][a]%m + dp[j-1][i]%m )%m;
            dp[j][i]+=(dp[j-1][e]%m + dp[j-1][o]%m )%m;
            dp[j][o]+=dp[j-1][i]%m ;
            dp[j][u]+=(dp[j-1][i]%m + dp[j-1][o]%m)%m ;
        }
        int ans=0;
        for(int j=0;j<5;j++)
        {
            ans=(ans%m + dp[n][j]%m )%m;
        }
        return ans;
    }
};
