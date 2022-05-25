[Maximum Height by Stacking Cuboids](https://leetcode.com/problems/maximum-height-by-stacking-cuboids/)
```cpp
class Solution {
public:
    int maxHeight(vector<vector<int>>& v) {
        for(auto &i:v) sort(i.begin(),i.end());
        v.push_back({0,0,0});
        sort(v.begin(),v.end());
        int n=v.size();
        vector<int> dp(n,0);
        int ans=0;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(v[i][0]>=v[j][0] && v[i][1]>=v[j][1] && v[i][2]>=v[j][2])
                {
                    dp[i]=max(dp[i],v[i][2]+dp[j]);
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
        
    }
};
```
