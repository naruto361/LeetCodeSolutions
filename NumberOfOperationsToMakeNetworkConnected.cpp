void dfs(vector<vector<int>> &v,vector<bool> &vis,int i)
    {
        vis[i]=1;
        for(auto j:v[i])
        {
            if(vis[j]==0) dfs(v,vis,j);
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<bool> vis(n,0);
        int l=connections.size();
        if(n>l+1) return -1;
        vector<vector<int>> v(n);
        for(int i=0;i<connections.size();i++)
        {
                v[connections[i][0]].push_back(connections[i][1]);
                v[connections[i][1]].push_back(connections[i][0]);
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                dfs(v,vis,i);
                c++;
            }
        }
        return c-1;
    }
