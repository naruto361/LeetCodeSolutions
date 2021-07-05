class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        vector<vector<int>> v;
        vector<int> temp;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[0].size();j++)
            {
                temp.push_back(nums[i][j]);
                if(temp.size()==c) v.push_back(temp),temp.clear();
            }
        }
        if(v.size()==r && v[0].size()==c)
        return v;
        return nums;
    }
};
