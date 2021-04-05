## [Jump Game](https://leetcode.com/problems/jump-game/)
```cpp
bool canJump(vector<int>& nums) {
        if(nums.size()<2) return nums.size();
        if(nums[0]==0) return 0;
        int r=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            r=max(r,i+nums[i]);
            if(r<=i) return 0;
            if(r>=nums.size()-1) return 1;
        }
        return 0;
    }
```
