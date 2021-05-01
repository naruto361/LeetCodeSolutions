void dfs(int i, int j,vector<vector<int>> &image,int newColor,int u)
    {
        if(i<0 || j<0 || i>=image.size() || j>=image[0].size() || image[i][j]!=u) return ;
        image[i][j]=newColor;
        dfs(i+1,j,image,newColor,u);
        dfs(i,j+1,image,newColor,u);
        dfs(i-1,j,image,newColor,u);
        dfs(i,j-1,image,newColor,u);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int u=image[sr][sc];
        if(u==newColor) return image;
        dfs(sr,sc,image,newColor,u);
        return image; 
    }
