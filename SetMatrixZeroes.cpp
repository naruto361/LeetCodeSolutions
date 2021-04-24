void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> x,y;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    x.insert(j);
                    y.insert(i);
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(x.find(j)!=x.end() || y.find(i)!=y.end())
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
