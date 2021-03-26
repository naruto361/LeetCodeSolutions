## [Single Number II](https://leetcode.com/problems/single-number-ii/)
```cpp
int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]==3) mp.erase(nums[i]);
        }
        return mp.begin()->first;     
    }
```
