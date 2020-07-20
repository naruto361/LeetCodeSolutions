class Solution {
public:
    char findTheDifference(string s, string t) {
        int f1[26]={0},f2[26]={0};
        for(int i=0;i<s.length();i++)
            f1[s[i]-'a']++;
        for(int i=0;i<t.length();i++)
            f2[t[i]-'a']++;
        for(int i=0;i<26;i++)
        {
            if(f1[i]!=f2[i]) return char('a'+i);
        }
        return '0';
        
    }
};
