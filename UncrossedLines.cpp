int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int dp[501][501]={0};
        int m=nums1.size(),n=nums2.size();
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 || j==0) dp[i][j]=0;
                else if(nums1[i-1]==nums2[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[m][n];
    }
