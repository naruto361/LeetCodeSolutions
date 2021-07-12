
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!= t.length()) return false;
        map<char,char> mp1,mp2;
        for(int i=0;i<s.length();i++)
        {
            if(mp1.find(s[i])==mp1.end() && mp2.find(t[i])==mp2.end()) 
                mp1[s[i]]=t[i],mp2[t[i]]=s[i];
            else if(mp1.find(s[i])==mp1.end() ^ mp2.find(t[i])==mp2.end())
                return false;
            else if(mp1[s[i]]!=t[i] && mp2[t[i]]!=s[i]) return false;
        }
        return true;
    }
};
/**************************************************************/
class Solution {
public:
    bool isIsomorphic(string str1, string str2) {
        int m = str1.length(), n = str2.length();
        if (m != n) 
            return false;  
        bool marked[1000] = {false}; 
        int map[1000]; 
        memset(map, -1, sizeof(map)); 
        for (int i = 0; i < n; i++) 
        { 
            if (map[str1[i]] == -1) 
            { 
                if (marked[str2[i]] == true) 
                    return false; 
                marked[str2[i]] = true; 
                map[str1[i]] = str2[i]; 
            }  
            else if (map[str1[i]] != str2[i]) 
                return false; 
        } 
        return true; 
        }
};
