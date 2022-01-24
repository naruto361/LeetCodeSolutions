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
//////////////////////////////////////////////////////////////////
bool detectCapitalUse(string word) {
        int l=word.length();
        if(l==1) return true;
        string s1,s2,s3;
        for(int i=0;i<l;i++)
        {
            char small,big;
            small=word[i];big=word[i];
            if(word[i]>='a' && word[i]<='z')
            {
                big=char(word[i]-'a'+'A');
            }
            else
            {
                small=char(word[i]-'A'+'a');
            }
            
            s1+=big;
            s2+=small;
            if(i==0) s3+=big;
            else s3+=small;
            
        }
        return (word==s1 || word==s2 || word==s3);
    }
