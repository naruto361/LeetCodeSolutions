## [3 SUM CLOSEST](https://leetcode.com/problems/3sum-closest/)
```cpp
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans=INT_MAX;
        int diff=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)   
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1,k=nums.size()-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==target)
                {
                    return target;
                }
                else if(nums[i]+nums[j]+nums[k]<target)
                {
                    if(abs(nums[i]+nums[j]+nums[k]-target)<diff) 
                    {
                        diff=abs(nums[i]+nums[j]+nums[k]-target);
                        ans=nums[i]+nums[j]+nums[k];
                    }
                    while(nums[j]==nums[j+1])
                    {
                        j++;
                        if(j==nums.size()-1) break;
                    }
                    j++;
                }
                else 
                {
                    if(abs(nums[i]+nums[j]+nums[k]-target)<diff) 
                    {
                        diff=abs(nums[i]+nums[j]+nums[k]-target);
                        ans=nums[i]+nums[j]+nums[k];
                    }
                    while(nums[k]==nums[k-1])
                    {
                        k--;
                        if(k==0) break;
                    }
                    k--;
                }
            }
        }
        return ans;
    }
};
```
