class Solution {
public:
    int dfs(vector<vector<int>> &dp,int i,int j,
    vector<vector<int>> &mat,int prev)
    {
        if(i<0 || j<0 || i>=mat.size() || j>=mat[0].size()
        || mat[i][j]<=prev) return 0;
        if(dp[i][j]) return dp[i][j];
        int l=dfs(dp,i,j-1,mat,mat[i][j]);
        int r=dfs(dp,i,j+1,mat,mat[i][j]);
        int u=dfs(dp,i-1,j,mat,mat[i][j]);
        int d=dfs(dp,i+1,j,mat,mat[i][j]);
        return dp[i][j]=max({l,r,u,d})+1;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<vector<int>> dp(n,vector<int> (m,0));
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                maxi=max(maxi,dfs(dp,i,j,matrix,-1));
            }
        }
    return maxi;
    }
};
