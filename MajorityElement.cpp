// MOORE MAJORITY VOTE ALGO
int majorityElement(vector<int>& nums) {
        int cnt=0,maxi=0;
        maxi=nums[0];
        cnt++;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==maxi) cnt++,maxi=nums[i];
            else
            {
                cnt--;
                if(cnt==0) maxi=nums[i],cnt=1;
            }
        }
        return maxi;
    }
