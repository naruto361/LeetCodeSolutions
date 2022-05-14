# DIJKSTRA
```cpp
vector<pair<int,int>> adj[n+1];
        for(auto &i:times)
        {
            adj[i[0]].push_back({i[1],i[2]});
        }
        vector<int> dist(n+1,1e9);
        dist[k]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,k});
        while(!pq.empty())
                {
                    int d=pq.top().first;
                    int u=pq.top().second;
                    pq.pop();
                    for(auto &i:adj[u])
                    {
                        int v=i.first;
                        int wt=i.second;
                        if(dist[v]>dist[u]+wt)
                        {
                            dist[v]=dist[u]+wt;
                            pq.push({dist[v],v});
                        }
                    }
                }
        
                int ans=0;
        for(int i=1;i<=n;i++)
                {
                    if(dist[i]==1e9) return -1;
                    ans=max(ans,dist[i]);
                }
        return ans;
```

# BELLMAN FORD
```cpp
int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dist(n+1,1e9);
        dist[k]=0;
        for(int i=0;i<n;i++)
        {
            int change=0;
            for(int j=0;j<times.size();j++)
            {
                int x=times[j][0],y=times[j][1],wt=times[j][2];
                if(dist[y]>dist[x]+wt)
                {
                    dist[y]=dist[x]+wt;
                    change++;
                }
            }
            if(change==0) break;
        }
        int maxi=0;
        for(int i=1;i<=n;i++)
        {
            if(dist[i]==1e9) return -1;
            maxi=max(dist[i],maxi);
        }
        return maxi;
    }
```
