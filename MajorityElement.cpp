class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        sort(nums.begin(),nums.end());
        int best=1,ans=1;
        int ok=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]) {ans++;best=max(ans,best);if(best==ans) ok=nums[i];}
            else
            {ans=1;
            }
        }
        return ok;
    }
};
