## [Combination Sum IV](https://leetcode.com/problems/combination-sum-iv/)
```cpp
        vector<unsigned int> dp(target+1,0);
        dp[0]=1;
        for(int i=1;i<=target;i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i>=nums[j])
                {
                    dp[i]+=dp[i-nums[j]];
                }
            }
        }
        return dp[target];
```
