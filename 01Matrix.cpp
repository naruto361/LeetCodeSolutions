bool valid(int i,int j,int n,int m)
    {
        if(i<0 || i>=n || j<0 || j>=m) return 0;
        return 1;
    }
    vector<int> dx={-1,1,0,0};
    vector<int> dy={0,0,-1,1};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>> q;
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> dist(m,vector<int>(n,-1));
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==0)
                { 
                    q.push({i,j});
                    dist[i][j]=0;
                }
            }
        while(!q.empty())
        {
            int currx=q.front().first,curry=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int newx=currx+dx[i];
                int newy=curry+dy[i];
                if( valid(newx,newy,m,n) && dist[newx][newy]==-1)
                {
                    q.push({newx,newy});
                    dist[newx][newy]=dist[currx][curry]+1;
                }
            }
        }
        return dist;
    }
