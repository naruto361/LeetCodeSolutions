int getMinDistance(vector<int>& nums, int target, int start) {
        if(nums[start]==target) return 0;
        int ans=nums.size()+1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                ans=min(ans,abs(i-start));
            }
        }
        return ans;
    }
