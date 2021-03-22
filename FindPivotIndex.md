## [Find Pivot Index](https://leetcode.com/problems/find-pivot-index/)
```cpp
int pivotIndex(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++) ans+=nums[i];
        if(ans==nums[0]) return 0;
        int sum1=nums[0],prev=0;
        for(int i=1;i<nums.size();i++)
        {
            sum1+=nums[i];
            prev+=nums[i-1];
            if(ans-sum1 == prev ) return i;
        }
        return -1;
    }
```
