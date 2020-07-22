class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> v;

        for(int i=0;i<A[0].size();i++)
        {
                    vector<int> a;
            for(int j=0;j<A.size();j++)
            {
                a.push_back(A[j][i]);
            }
            v.push_back(a);
            a.clear();
        }
        return v;
    }
};
