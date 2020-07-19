class Solution {
public:
    bool vowel(char c)
    {
        switch(c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':return 1;
            default:return 0;
        }
    }
    string reverseVowels(string s) {
        vector<char> a;
        for(int i=0;i<s.length();i++)
        {
            if(vowel(s[i])) a.push_back(s[i]);
        }
        int k=0;
        for(int i=s.length()-1;i>=0;i--)
            {
                if(vowel(s[i])) {s[i]=a[k];k++;}
            }
        return s;
    }
};
