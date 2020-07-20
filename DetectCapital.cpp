class Solution {
public:
    bool detectCapitalUse(string word) {
        int l=0;
        for(int i=0;i<word.length();i++)
            if(word[i]>='a'&& word[i]<='z') l++;
        if(l==word.length() || l==0) return 1;
        for(int i=1;i<word.length();i++)
        {
            if(word[i]>='A' && word[i]<='Z') return 0;
        }
        return 1;
    }
};
