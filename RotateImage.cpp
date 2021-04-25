void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> v(n,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                v[i][j]=matrix[n-1-j][i];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix[i][j]=v[i][j];
            }
        }
    }
