class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // vector<vector<int>> dup=matrix;
        // int m=matrix.size() , n=matrix[0].size();
        // for(int i=0;i<m;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         matrix[j][m-1-i]=dup[i][j];
        //     }
        // }
        // SWAP AND REVERSE
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};
