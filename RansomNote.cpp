class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int f1[26]={0},f2[26]={0};
        for(int i=0;i<ransomNote.size();i++)
        {
            f1[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.size();i++)
        {
            f2[magazine[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(f1[i]>f2[i]) return 0;
        }
        return 1;
    }
};
