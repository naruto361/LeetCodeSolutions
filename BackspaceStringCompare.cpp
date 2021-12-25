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
////////////////////////////////////////////////////////
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1,st2;
        for(char c:s)
        {
            if(c!='#') st1.push(c);
            else {
                if(!st1.empty()) st1.pop();
            }
        }
        for(char c:t)
        {
            if(c!='#') st2.push(c);
            else {
                if(!st2.empty()) st2.pop();
            }
        }
        if(st1.size() != st2.size()) return false;
        while(!st1.empty() && !st2.empty())
        {
            if(st1.top()!=st2.top()) return false;
            st1.pop();
            st2.pop();
        } 
        return true;
    }
};
