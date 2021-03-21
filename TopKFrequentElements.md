## [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)
```cpp
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    if(a.second == b.second) return a.first < b.first;
    return (a.second > b.second); 
}
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size()==1 && k==1) return nums; 
        map<int,int> mp;
        for(auto i:nums) mp[i]++;
        vector<pair<int,int>> v;
        for(auto i:mp) v.push_back(i);
        sort(v.begin(),v.end(),sortbysec);
        vector<int> ans;
        int l=0;
        for(auto i:v)
        {
            l++;
            ans.push_back(i.first);
            if(l==k) break;
        }
        return ans;
        
    }
};
```
