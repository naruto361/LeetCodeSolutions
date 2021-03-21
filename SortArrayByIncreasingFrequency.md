## [Sort Array By Increasing Frequency](https://leetcode.com/problems/sort-array-by-increasing-frequency/)
```cpp
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
    { 
        if(a.second==b.second) return a.first>b.first;
        return (a.second < b.second); 
    }
class Solution {
    
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> mp;
        for(int i:nums) mp[i]++;
        vector<pair<int,int>> v;
        for(auto i:mp) v.push_back(i);
        sort(v.begin(),v.end(),sortbysec);
        vector<int>ans;
        for(auto i:v) while(i.second--) ans.push_back(i.first);
        return ans;
    }
};
```
