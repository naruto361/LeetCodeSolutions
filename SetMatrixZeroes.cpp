class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> a;
        for(int i=0;i<matrix.size();i++)
        {   vector<int>v;
            for(int j=0;j<matrix[i].size();j++)
                {
                    v.push_back(-1);
                }
         a.push_back(v);
         v.clear();
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    for(int k=0;k<matrix[i].size();k++)
                        a[i][k]=0;
                    for(int k=0;k<matrix.size();k++)
                        a[k][j]=0;
                    
                }
                else
                {
                    if(a[i][j]!=0) a[i][j]=matrix[i][j];
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
                {
                    matrix[i][j]=a[i][j];
                }
        }
    }
};
