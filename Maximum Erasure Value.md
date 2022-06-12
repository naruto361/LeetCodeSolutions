class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans=0;
        int sum=0,l=0;
        for(int r=0;r<nums.size();r++)
        {
            mp[nums[r]]++;
            sum += nums[r];
            while(mp[nums[r]]>1)
            {
                sum-=nums[l];
                mp[nums[l]]--;
                l++;
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};
