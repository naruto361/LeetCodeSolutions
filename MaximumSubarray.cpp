class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best=-999999,sum=-999999;
        if(nums.size()==1)  return nums[0];
        for(int i=0;i<nums.size();i++)
        {
            sum=max( nums[i] , (nums[i]+sum) );
            best=max(best,sum);
        }
        return best;
    }
};
