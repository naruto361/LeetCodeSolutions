class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,best=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1) {ans++;best=max(best,ans);}
            else
                ans=0;
        }
        return best;
    }
};
