class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if(nums.size()==1) return 0;
        vector<int> v;
        v=nums;
        sort(nums.begin(),nums.end(),greater<int>());
        if(nums[0]>=2*nums[1]) 
        {
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==nums[0]) return i;
            }
        }
        return -1;
        
    }
};
