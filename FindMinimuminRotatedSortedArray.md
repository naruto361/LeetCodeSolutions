 ## [Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)
 ```cpp
 int findMin(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int r=nums.size()-1,l=0;
        if(nums[r]>nums[0]) return nums[0];
        while(l<r)
        {
            int mid= l+(r-l)/2;
            if(nums[mid]>nums[mid+1]) return nums[mid+1];
            else if(nums[mid] <nums[mid-1]) return nums[mid];
            else if(nums[mid]>nums[0]) l=mid+1;
            else r=mid-1;
        }
        return -1;
    }
 ```
