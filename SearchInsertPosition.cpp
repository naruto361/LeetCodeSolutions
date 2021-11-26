class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        if(target<nums[0]) return 0;
        if(target>nums[h]) return h+1;
        auto it = lower_bound(nums.begin(),nums.end(),target);
        return it-nums.begin();
        // while(l<h)
        // {
        //     int mid = l + (h-l)/2;
        //     if(nums[mid]>=target) h=mid;
        //     else l=mid+1;
        // }
        //return h;
    }
};
