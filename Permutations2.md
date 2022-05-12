```
if two swaps ,then pass by reference
if one swap , pass by reference does not work
```

```cpp
void solve(vector<vector<int>> &ans,vector<int> &nums,int i)
    {
        if(i==nums.size())
        {
            ans.push_back(nums);
            return ;
        }
        for(int j=i;j<nums.size();j++)
        {
            if(j>i && nums[j]==nums[i]) continue;
            swap(nums[i],nums[j]);
            solve(ans,nums,i+1);
            //swap(nums[i],nums[j]);
            
        }
        for(int j=nums.size()-1;j>i;j--) swap(nums[i],nums[j]);
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        // [1,1,3,1,2,4,1,2] , [1,1,2,3,4]
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        solve(ans,nums,0);
        return ans;
    }
```

```cpp
void solve(vector<vector<int>> &ans,vector<int> nums,int i)
    {
        if(i==nums.size())
        {
            ans.push_back(nums);
            return ;
        }
        for(int j=i;j<nums.size();j++)
        {
            if(j>i && nums[j]==nums[i]) continue;
            swap(nums[i],nums[j]);
            solve(ans,nums,i+1);
            //swap(nums[i],nums[j]);
            
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        // [1,1,3,1,2,4,1,2] , [1,1,2,3,4]
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        solve(ans,nums,0);
        return ans;
    }
```
