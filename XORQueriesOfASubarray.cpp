class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> v1(arr.size());
        v1[0]=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            v1[i]=v1[i-1]^arr[i];
        }
        vector<int> ans;
        for(int i=0;i<queries.size();i++)
        {
            if(queries[i][0]==queries[i][1]) ans.push_back(arr[queries[i][0]]);
            else
            {
                if(queries[i][0]==0) ans.push_back(v1[queries[i][1]]);
            else ans.push_back(v1[queries[i][1]] ^ v1[queries[i][0]-1]);
            }
        }
        return ans;
    }
};
