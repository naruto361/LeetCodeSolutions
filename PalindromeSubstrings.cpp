int countSubstrings(string s) {
        int l=s.length();
        vector<vector<int>> dp(l,vector<int>(l,0));
        int ans=0;
        for(int i=0;i<l;i++) dp[i][i]=1,ans++;
        for(int i=0;i<l-1;i++)
        {
            if(s[i]==s[i+1]) dp[i][i+1]=1,ans++;
        }
        for(int i=l-2;i>=0;i--)
        {
            for(int j=i+2;j<l;j++)
            {
                if(s[i]==s[j])
                {
                    if(dp[i+1][j-1]==1)
                    {
                        dp[i][j]=1;ans++;
                    }
                }
            }
        }
        return ans;
    }
