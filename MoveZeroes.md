##  METHOD   1
```cpp
    void moveZeroes(vector<int>& nums) {
        vector<int>zeros;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {   if(nums[i]!=0)
            ans.push_back(nums[i]);
            else zeros.push_back(0);
        }
        for(int i=0;i<ans.size();i++)
            nums[i]=ans[i];
        for(int i=0;i<zeros.size();i++)
            nums[ans.size()+i]=0;
    }
```

##  METHOD   2
```cpp
    int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[cnt++]=nums[i];
            }
        }
        for(;cnt<nums.size();) nums[cnt++]=0;


```

##  METHOD   3
```cpp
  int count = 0;
    for(int i=0; i< nums.size(); i++)
    {
        if(nums[i]==0)
        {
            count++;
        }
        else if(count!=0)
        {
            nums[i-count] = nums[i];
            nums[i] = 0;
        }   
    }      
```
    

