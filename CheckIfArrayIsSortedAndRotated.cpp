bool check(vector<int>& nums) {
        if(nums.size()<3) return true;
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>nums[(i+1)%nums.size()]) k++;
        }
        cout<<k;
        return k<=1;
    }
