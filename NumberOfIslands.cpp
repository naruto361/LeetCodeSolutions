class Solution {
public:
    void mark(vector<vector<char>> &mat,int x,int y,int r,int c)
    {
        if(x<0 || x>=r || y<0 || y>=c ||mat[x][y]!='1') return;
            mat[x][y]='2';
            mark(mat,x+1,y,r,c);
            mark(mat,x,y+1,r,c);
            mark(mat,x,y-1,r,c);
            mark(mat,x-1,y,r,c);
    }
    public:
    int numIslands(vector<vector<char>>& grid) {
        ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
        int rows=grid.size();
        if(rows==0) return 0;
        int col=grid[0].size();
        int ans=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='1')
                {   mark(grid,i,j,rows,col);
                    ans++;
                    
                }
            }
        }
        return ans;
    }
};
