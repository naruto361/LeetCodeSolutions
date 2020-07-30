class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> v;
        for(int i=0;i<mat.size();i++)
        {
            int a=0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1) a++;
            }
            v.push_back(make_pair(a,i));
        }
        sort(v.begin(),v.end());
        vector<int>p;
        for(int i=0;i<k;i++)
            p.push_back(v[i].second);
        return p;
    }
};
