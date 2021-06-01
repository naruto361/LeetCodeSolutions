double findMaxAverage(vector<int>& nums, int k) {
        if(k==1)
        {
            return (double)*max_element(nums.begin(),nums.end());
        }
        vector<double> sum(nums.size(),0);
        sum[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            sum[i]=sum[i-1]+nums[i];
        }
        if(k==nums.size()) return (double)sum[nums.size()-1]/k;
        double maxi=-1e9;
        for(int i=0;i<=nums.size()-k;i++)
        {
            maxi=max(maxi,sum[i+k-1]-sum[i]+nums[i]);
        }
        return maxi/(double)k;
    }
