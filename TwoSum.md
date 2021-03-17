## [TWO SUM](https://leetcode.com/problems/two-sum/)
```cpp
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> v;
        int k=0;
        for (auto i:nums) 
        {
            if (v.find(target -i) != v.end()) return {v[target -i], k};
            v[i] = k++;
        }
        return {};
    }
```
