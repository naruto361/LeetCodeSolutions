## [ Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)
```cpp
vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()<2)
        {
            if(nums.size()==1)
            if(nums[0]==target) return {0,0};
             return {-1,-1};
        }
        int lower=INT_MAX,upper=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                lower=min(lower,i);
                upper=max(upper,i);
            }
        }
        if(lower==INT_MAX) lower=-1;
        if(upper==INT_MIN) upper=-1;
        return {lower,upper};
    }
```
