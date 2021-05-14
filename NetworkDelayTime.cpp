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
