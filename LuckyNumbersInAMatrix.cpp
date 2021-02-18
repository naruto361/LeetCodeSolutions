class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> v;
        map<int,vector<int>> row,col;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                row[i].push_back(matrix[i][j]);
                col[j].push_back(matrix[i][j]);
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==*min_element(row[i].begin(),row[i].end() )
                && matrix[i][j]==*max_element(col[j].begin(),col[j].end()) )
                    v.push_back(matrix[i][j]);
                    
            }
        }
        return v;
    }
};
