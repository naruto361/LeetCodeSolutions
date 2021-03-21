## [Top K Frequent Words](https://leetcode.com/problems/top-k-frequent-words/)
```cpp
bool sortbysec(const pair<string,int> &a, 
              const pair<string,int> &b) 
{ 
    if(a.second == b.second) return a.first<b.first;
    return (a.second > b.second); 
}
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> mp;
        for(auto i:words)
        {
            mp[i]++;
        }
        vector<pair<string,int>> v;
        for(auto i:mp) v.push_back(i);
        sort(v.begin(),v.end(),sortbysec);
        vector<string> ans;
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
