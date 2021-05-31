vector<int> largestDivisibleSubset(vector<int>& nums) {
        if(nums.size()==1) return {nums[0]};
        sort(nums.begin(),nums.end());
        vector<int> ans(nums.size(),1);int maxi=0;
        vector<int> v;
        int index=-1;
        for(int i=1;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]%nums[j]==0)
                { 
                    ans[i]=max(ans[i],1+ans[j]);
                    if(ans[i]>maxi) maxi=ans[i],index=i;
                }
            }
        }
        if(index==-1) return {nums[0]};
        v.push_back(nums[index]);
        int j=index;
        for(int i=index-1;i>=0;i--)
        {
            if(v.back()%nums[i]==0 && ans[j]==ans[i]+1)
            {
                v.push_back(nums[i]);
                    j=i;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
