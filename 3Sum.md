
## 3 SUM
```cpp
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        if(nums.size()<3) return ans;
        sort(nums.begin(),nums.end());
        if(nums[0]==0 && nums[nums.size()-1]==0) return {{0,0,0}};
        for(int i=0;i<nums.size()-2;i++)   
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1,k=nums.size()-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k] ==0)
                {
                    ans.push_back(vector<int> {nums[i],nums[j],nums[k]});
                    while(nums[j]==nums[j+1] ) {j++;if(j==nums.size()-1) break;}
                    while(nums[k]==nums[k-1] ) {k--;if(k==0) break;}
                    j++;k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0) j++;
                else k--;
            }
        }
        return ans;
        
    }
  ```
