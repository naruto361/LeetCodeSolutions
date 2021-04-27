int maxSubArray(vector<int>& nums) {
        int ans=nums[0],best=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            ans=max(nums[i]+ans,nums[i]);
            best=max(ans,best);
        }
        return best;
    }
