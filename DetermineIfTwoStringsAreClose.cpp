class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1==word2) return 1;
        if(word1.length()!=word2.length()) return 0;
        int f1[26]={0};
        int f2[26]={0};
        for(int i=0;i<word1.length();i++)
            f1[word1[i]-'a']++;
        for(int i=0;i<word2.length();i++)
            f2[word2[i]-'a']++;
        for(int i=0;i<26;i++)
        {
            if(f1[i]==0 && f2[i]!=0) return 0;
            else if(f2[i]==0 && f1[i]!=0) return 0;
        }
        sort(f1,f1+26);
        sort(f2,f2+26);
        for(int i=0;i<26;i++)
        {
            if(f1[i]!=f2[i]) return 0;
        }
        return 1;
        
    }
};
