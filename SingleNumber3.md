```
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int v=0;
        for(auto &i:nums) v=v^i;
        int idx=0;
        for(idx=0;idx<=31;idx++)
        {
            if(v&(1<<idx)) break;
        }
        int ans1=0;//,ans2=0;
        for(auto &i:nums)
        {
            if(i&(1<<idx)) ans1=ans1^i;
            //else ans2=ans2^i;
        }
        return {ans1,v^ans1};//ans2};
    }
};
```

```
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,bool> mp;
        for(auto &i:nums)
        {
            if(s.find(i)==s.end()) s.insert(i);
            else s.erase(i);
        }
        return {*s.begin(),*(++s.begin())};
    }
};
```
