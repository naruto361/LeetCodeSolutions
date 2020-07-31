class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int f1[26]={0},f2[26]={0},a=0;
        for(int i=0;i<J.length();i++)
        {
            if(J[i]>='A'&& J[i]<='Z')
                f2[J[i]-'A']=1;
            if(J[i]>='a'&& J[i]<='z')
                f1[J[i]-'a']=1;
        }
        for(int i=0;i<S.length();i++)
        {
            if(S[i]>='A'&& S[i]<='Z')
                if(f2[S[i]-'A']==1) a++;
            if(S[i]>='a'&& S[i]<='z')
                if(f1[S[i]-'a']==1) a++;
        }
        return a;
    }
};
