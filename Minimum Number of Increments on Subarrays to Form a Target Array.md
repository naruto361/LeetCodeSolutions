## [Minimum Number of Increments on Subarrays to Form a Target Array](https://leetcode.com/problems/minimum-number-of-increments-on-subarrays-to-form-a-target-array/)
```cpp
int minNumberOperations(vector<int>& target) {
        for(int i=1;i<target.size();i++)
        {
            target[0]+=max(0,target[i]-target[i-1]);
        }
        return target[0];
    }
```
