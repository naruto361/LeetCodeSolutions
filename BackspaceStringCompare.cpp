class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string s="";string t="";
        for(int i=0;i<S.length();i++)
        {
            if(S[i]!='#') s+=S[i];
            else {int k=s.size();
                  if(k>0)
                    s.erase(k-1);}
        }
        for(int i=0;i<T.length();i++)
        {
            if(T[i]!='#') t+=T[i];
            else {int k=t.size();
                  if(k>0)
                t.erase(k-1);}
        }
        return s==t;
    }
};
