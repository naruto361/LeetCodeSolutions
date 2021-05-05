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
