int minFallingPathSum(vector<vector<int>>& matrix) {
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                int mini=1e9;
                if(j-1>=0 && matrix[i-1][j-1]<mini) mini=matrix[i-1][j-1];
                if(matrix[i-1][j]<mini) mini=matrix[i-1][j];
                if(j+1<matrix[0].size() && matrix[i-1][j+1]<mini) mini=matrix[i-1][j+1];
                matrix[i][j]+=mini;
            }
        }
        int mini=1e9;
        for(int i=-0;i<matrix[0].size();i++)
        {
            mini=min(mini,matrix[matrix.size()-1][i]);
        }
        return mini;
    }
