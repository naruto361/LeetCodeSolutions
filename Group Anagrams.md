## METHOD 1 COUNTING SORT
```cpp
class Solution {
public:
    string solve(string s)
    {
        string temp;
        int f[26]={0};
        for(char &c:s) f[c-'a']++;
        for(int j=0;j<26;j++)
        {
            temp += char(j+'a')+to_string(f[j]);
        }
        return temp;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<int> > mp;
        for(int i=0;i<strs.size();i++)
        {
            mp[solve(strs[i])].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto &i:mp)
        {
            vector<string> v;
            for(auto &j:i.second) v.push_back(strs[j]);
            ans.push_back(v);
        }
        return ans;
    }
};
```

## METHOD 2 : SORTING THEN USING MAP<STR,VECTOR<STR>>
```cpp
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<int>> mp;
        for(int i=0;i<strs.size();i++)
        {
            string s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            vector<string> k;
            for(int j=0;j<i->second.size();j++)
            {
                k.push_back(strs[i->second[j]]);
            }
            ans.push_back(k);
            k.clear();
        }
        return ans;
    }
```
