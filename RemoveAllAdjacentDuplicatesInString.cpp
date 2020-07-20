class Solution {
public:
    string removeDuplicates(string S) {
        int k=1;
        for(int i=1;i<S.length();i++)
        {
            if(S[i]==S[i-1]) {k=-1;S.erase(i-1,2);}
        }
        
        if(k==1) return S;
        else return removeDuplicates(S);
    }
};
