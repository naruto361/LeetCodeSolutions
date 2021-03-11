class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        int dp[366]={0};
        for(auto i:days ) dp[i]=costs[0];
        for(int i=1;i<=days[n-1];i++)
        {
            if(dp[i]==0) dp[i]=dp[i-1];
            else
            {
                dp[i]=dp[i-1]+costs[0];
                int j=0;
                 j=max(0,i-7);
                dp[i]=min(dp[i],dp[j]+costs[1]);
                 j=max(0,i-30);
                dp[i]=min(dp[i],dp[j]+costs[2]);
            }
        }
        return dp[days[n-1]];
        
    }
};
