class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                v.push_back(i+1);
        }
        for(int i=1;i<v.size();i++)
        {
            if((v[i]-v[i-1])<=k) return 0;
        }
        return 1;
    }
};
