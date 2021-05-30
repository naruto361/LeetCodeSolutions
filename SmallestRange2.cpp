int smallestRangeII(vector<int>& nums, int k) {
        if(nums.size()==1) return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=nums[n-1]-nums[0];
        for(int i=1;i<n;i++)
        {
            int maxi=max(nums[i-1]+k,nums[n-1]-k);
            int mini=min(nums[0]+k,nums[i]-k);
            ans= min(ans,maxi-mini);
            cout<<maxi<<" "<<mini<<" "<<maxi-mini<<" "<<ans<<endl;
        }
        return ans;
    }
