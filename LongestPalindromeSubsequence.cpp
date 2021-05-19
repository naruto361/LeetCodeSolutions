int longestPalindromeSubseq(string s) {
        if(s.length()<2) return s.length();
        int l=s.length();
        vector<vector<int>> dp(l,vector<int>(l,0));
        int maxi=1;
        for(int i=0;i<l;i++) dp[i][i]=1;
        for(int i=0;i<l-1;i++)
        {
            if(s[i]==s[i+1]) dp[i][i+1]=2,maxi=2;
            else dp[i][i+1]=1;
        }
        for(int i=l-2;i>=0;i--)
        {
            for(int j=i+2;j<l;j++)
            {
                if(s[i]==s[j])
                {
                    dp[i][j]=2+dp[i+1][j-1];
                    maxi=max(maxi,dp[i][j]);
                }
                else dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
            }
        }
        return maxi;
    }
