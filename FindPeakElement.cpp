class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) return 0;
        for(int i=1;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]) return i;
        }
        int maxi=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
            if(nums[i]==maxi) return i;
        return 0;
    }
};
