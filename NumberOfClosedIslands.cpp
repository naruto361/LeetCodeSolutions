void dfs2(int i,int j,vector<vector<int>>& grid)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]!=0) return;
        grid[i][j]=9;
        dfs2(i+1,j,grid);
        dfs2(i,j+1,grid);
        dfs2(i-1,j,grid);
        dfs2(i,j-1,grid);
    }
    void dfs(int i,int j,vector<vector<int>>& grid)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]!=0) return;
        grid[i][j]=2;
        dfs(i+1,j,grid);
        dfs(i,j+1,grid);
        dfs(i-1,j,grid);
        dfs(i,j-1,grid);
    }
    int closedIsland(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++) dfs2(i,0,grid);
        for(int i=1;i<grid[0].size();i++) dfs2(0,i,grid);
        for(int i=1;i<grid[0].size();i++) dfs2(grid.size()-1,i,grid);
        for(int i=1;i<grid.size()-1;i++) dfs2(i,grid[0].size()-1,grid);
        int ans=0;
        for(int i=1;i<grid.size()-1;i++)
        {
            for(int j=1;j<grid[0].size()-1;j++)
            {
                if(grid[i][j]==0)
                {
                    ans++;
                    dfs(i,j,grid);
                }
            }
        }
        return ans;
    }
