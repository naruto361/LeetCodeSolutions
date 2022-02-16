## [Single Number II](https://leetcode.com/problems/single-number-ii/)
```cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        long long ans=0;
        int f[33]={0};
        1 extra bit to handle -ve numbers
        for(long long i=0;i<33;i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]&(1LL*1<<i)) f[i]++;
            }
            if(f[i]%3==1) ans+=pow(2,i);
        }
        return ans;
    }
};
```
