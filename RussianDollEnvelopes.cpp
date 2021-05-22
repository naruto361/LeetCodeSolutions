int maxEnvelopes(vector<vector<int>>& envelopes) {
        int ans=1;
        sort(envelopes.begin(),envelopes.end());
        vector<int> dp(envelopes.size(),1);
        for(int i=1;i<envelopes.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(envelopes[i][0]>envelopes[j][0] && envelopes[i][1]>envelopes[j][1])
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
