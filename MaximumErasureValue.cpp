int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size(), sum = 0, maxi = 0, l = 0, r = 0;
        bool freq[10001]{false};
        while(r < n) 
        {
            while(freq[nums[r]])
                sum -= nums[l], freq[nums[l++]] = false;
            sum += nums[r], freq[nums[r++]] = true;  
            maxi = max(maxi, sum);    
        }
        return maxi;
    }
