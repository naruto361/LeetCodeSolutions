string longestPalindrome(string s) {
        if(s.length()<2) return s;
        string ans;
        int l=s.length(),len=1;
        int f1=0,s1=0;
        vector<vector<int>> dp(l,vector<int>(l,0));
        for(int i=0;i<l;i++) dp[i][i]=1;
        for(int i=0;i<l-1;i++)
        {
            if(s[i]==s[i+1]) dp[i][i+1]=1,len=2,f1=i,s1=i+1;
        }
        for(int i=l-2;i>=0;i--)
        {
            for(int j=i+2;j<l;j++)
            {
                if(s[i]==s[j])
                {
                    if(dp[i+1][j-1]==1)
                    {
                        dp[i][j]=1;
                        if(j-i+1>len) len=j-i+1,f1=i,s1=j;
                    }
                }
            }
        }
        for(int i=f1;i<=s1;i++) ans+=s[i];
        return ans;
    }
