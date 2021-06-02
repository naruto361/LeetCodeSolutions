int minIncrementForUnique(vector<int>& nums) {
        if(nums.size()<2) return 0;
        sort(nums.begin(), nums.end());
        int ans=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=nums[i-1])
            {
                ans+=nums[i-1]-nums[i]+1;
                nums[i]=nums[i-1]+1;
            }
        }
        return ans;
    }

[3,2,1,2,1,7]
sorted : [1,1,2,2,3,7]
ans=0;
[1,2,2,2,3,7] ans+=1
[1,2,3,2,3,7] ans+=1
[1,2,3,4,3,7] ans+=2
[1,2,3,4,5,7] ans+=2
ans=6
  DONE !!
