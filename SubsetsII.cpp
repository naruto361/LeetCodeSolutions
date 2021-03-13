class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<1<<nums.size();i++)
        {
            vector<int> v;
            for(int j=0;j<nums.size();j++)
            {
                if((i& 1<<j)!=0) v.push_back(nums[j]);
            }
            //sort(v.begin(),v.end());
            s.insert(v);
            v.clear();
        }
        for(auto i=s.begin();i!=s.end();i++) ans.push_back(*i);
        s.clear();
        sort(ans.begin(),ans.end());
        return ans;
    }
};
