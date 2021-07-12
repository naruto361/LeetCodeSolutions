class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        string temp;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ') v.push_back(temp),temp.clear();
            else temp+=s[i];
        }
        v.push_back(temp);
        if(pattern.length()!=v.size()) return false;
        unordered_map<char,string> mp1;
        unordered_map<string,char> mp2;
        for(int i=0;i<v.size();i++)
        {
            if(mp1.find(pattern[i])==mp1.end() && mp2.find(v[i])==mp2.end()) 
                mp1[pattern[i]]=v[i],mp2[v[i]]=pattern[i];
            else if(mp1.find(pattern[i])==mp1.end() ^ mp2.find(v[i])==mp2.end())
                return false;
            else if(mp1[pattern[i]]!=v[i] && mp2[v[i]]!=pattern[i]) return false;
        }
        return true;
    }
};
