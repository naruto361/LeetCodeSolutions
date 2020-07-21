class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair <int,int>> ans;
        for(int i=0;i<arr.size();i++)
        {
            int k=__builtin_popcount(arr[i]);
            ans.push_back( make_pair(k,arr[i]) );
        }
        sort(ans.begin(),ans.end());
        vector<int> v;
        for(int i=0;i<ans.size();i++)
            v.push_back(ans[i].second);
        return v;
    }
};
