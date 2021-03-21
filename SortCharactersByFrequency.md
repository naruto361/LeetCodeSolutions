## [Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/)
```cpp
bool sortbysec(const pair<char,int> &a, 
              const pair<char,int> &b) 
    { 
        if(a.second==b.second) return a.first<b.first;
        return (a.second > b.second); 
    }
class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        for(char c:s) mp[c]++;
        vector<pair<char,int>> v;
        for(auto i:mp) v.push_back(i);
        sort(v.begin(),v.end(),sortbysec);
        string ans="";
        for(auto i:v) while(i.second--) ans+=i.first;
        return ans;
    }
};
```
