class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long int sum=0;int mini=INT_MAX;
        for(int i=0;i<nums.size();i++) {sum+=nums[i];if(nums[i]<mini) mini=nums[i];}
        return sum - nums.size()*mini;
    }
};
