```
int check(int i,int j,vector<vector<int>> &grid)
    {
        int k=4;
        if(i+1>=0 && j>=0 && i+1<grid.size() && j<grid[0].size() && grid[i+1][j]==1) k--;
        if(i>=0 && j+1>=0 && i<grid.size() && j+1<grid[0].size() && grid[i][j+1]==1) k--;
        if(i-1>=0 && j>=0 && i-1<grid.size() && j<grid[0].size() && grid[i-1][j]==1) k--;
        if(i>=0 && j-1>=0 && i<grid.size() && j-1<grid[0].size() && grid[i][j-1]==1) k--;
            return k;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                    ans+=check(i,j,grid);
            }
        }
        return ans;
    }
```
