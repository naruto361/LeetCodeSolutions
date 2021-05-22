vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> v;
        
        for(string s:words)
        {
            bool check=true;
            if(s.length()==pattern.length())
            {
                unordered_map<char,char> mp1,mp2;
                for(int i=0;i<s.length();i++)
                {
                    if(mp1.find(s[i])==mp1.end())
                        mp1[s[i]]=pattern[i];
                    if(mp2.find(pattern[i])==mp2.end())
                        mp2[pattern[i]]=s[i];
                    if(mp1[s[i]]!=pattern[i]) check=false;
                    if(mp2[pattern[i]]!=s[i]) check=false;
                    
                    if(check==false) break;
                }
                if(check) v.push_back(s);
            }
        }
        return v;
    }
