class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        map<int,vector<int>> v;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                v[i+j].push_back(matrix[i][j]);
            }
        }
        vector<int> vec;
        for(int i=0;i<v.size();i++)
        {
            if(i&1)
            for(int j=0;j<v[i].size();j++)
            {
                vec.push_back(v[i][j]);
            }
            else
            {
                for(int j=v[i].size()-1;j>=0;j--)
                {
                    vec.push_back(v[i][j]);
                }
            }
        }
        return vec;
    }
};
