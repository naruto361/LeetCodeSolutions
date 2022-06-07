```cpp
class Solution {
public:
    #define ll long long
    int countPaths(int n, vector<vector<int>>& roads) {
        int mod=1e9+7;
        vector<vector<pair<int,int>>> adj(n);
        for(auto &i:roads)
        {
            adj[i[0]].push_back({i[1],i[2]});
            adj[i[1]].push_back({i[0],i[2]});
        }
        vector<int> dp(n,0);
        dp[0]=1;
        vector<ll> time(n,LONG_MAX);
        time[0]=0;
        priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<>> pq;
        pq.push({0,0}); // time , node
        while(!pq.empty())
        {
            ll node=pq.top().second;
            ll t=pq.top().first;
            pq.pop();
            for(auto &p:adj[node])
            {
                if(time[p.first]>t+p.second)
                {
                    time[p.first]=t+p.second;
                    dp[p.first]=dp[node];
                    pq.push({time[p.first],p.first});
                }
                else if(time[p.first]==t+p.second)
                {
                    dp[p.first] = (dp[p.first]%mod + dp[node]%mod )%mod;
                }
            }
        }
        return dp[n-1];
    }
};
```
