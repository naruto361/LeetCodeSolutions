class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> a;
        for(int i=0;i<A.size();i++)
        {   vector<int>v;
            for(int j=A[i].size()-1;j>=0;j--)
                v.push_back(A[i][j]);
         a.push_back(v);v.clear();
            
        }
        
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<a[i].size();j++)
            {
                if(a[i][j]==0) a[i][j]=1;
                else a[i][j]=0;
            }
        }
        return a;
    }
};
