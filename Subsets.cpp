class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        res.push_back({});
        for(int i=0;i<n;i++)
        {
            auto l = res.size();
            for(int j = 0;j<l;j++)
            {
                auto v = res[j];
                v.push_back(nums[i]);
                res.push_back(v);
            }
        }
        return res;
    }
};
