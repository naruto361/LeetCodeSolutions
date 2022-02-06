class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=0;
        for(auto &j:nums)
        {
            if(i<1 || j>nums[i-1]) nums[i++]=j;
        }
        return i;
        
        // int n=nums.size();
        // if(n<2) return n;
        // int idx=1;
        // for(int i=0;i<n-1;i++)
        // {
        //     if(nums[i]!=nums[i+1])
        //     {
        //         nums[idx++]=nums[i+1];
        //     }
        // }
        // return idx;
    }
};
