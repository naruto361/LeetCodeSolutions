class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        unordered_map<int,vector<int>> v;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                v[i-j].push_back(matrix[i][j]);
            }
        }
        for(auto i:v)
        {
            int k=i.second[0];
            for(auto j:i.second)
            {
                if(j!=k) return false;
            }
        }
        return true;
    }
};
/******************************************/
bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        unordered_map<int,int> mp;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mp.count(i-j)==0) mp[i-j]=matrix[i][j];
                else if(matrix[i][j]!=mp[i-j]) return false;
            }
        }
        return true;
    }
