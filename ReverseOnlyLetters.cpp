class Solution {
public:
    string reverseOnlyLetters(string S) {
        vector<char> v;
        for(int i=0;i<S.length();i++)
        {
            if((S[i]>='A' && S[i]<='Z') || (S[i]>='a'&& S[i]<='z'))
               v.push_back(S[i]);
        }
                int k=0;
                for(int i=S.length()-1;i>=0;i--)
                {
                    if((S[i]>='A' && S[i]<='Z') || (S[i]>='a'&& S[i]<='z'))
                        {S[i]=v[k];k++;}
                }
                        return S;
    }
};
