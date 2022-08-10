```cpp
class Solution {
public:
    static bool sortbyfunc(array<int,3> &a,array<int,3> &b)
    {
        return a[2]<b[2];
        
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<array<int,3>> v;
        int n=profit.size();
        for(int i=0;i<n;i++)
        {
            v.push_back({profit[i] , startTime[i] , endTime[i]});
        }
        sort(v.begin(),v.end(),sortbyfunc);
        vector<int> dp(n,0);
        dp[0]=v[0][0];
        for(int i=1;i<n;i++)
        {
            int f=0;
            for(int j=i-1;j>=0;j--)
            {
                if(v[i][1]>=v[j][2])
                {
                    f=dp[j];break;
                }
            }
            dp[i]=max(dp[i-1],f+v[i][0]);
        }
        return dp[n-1];
    }
};
```
