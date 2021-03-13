class Solution {
public:
    bool buddyStrings(string A, string B) {
        int same[26]={0},diff=0;
        char c[4];
        int f1[26]={0},f2[26]={0};
        for(auto i:A) f1[i-'a']++;
        for(auto i:B) f2[i-'a']++;
        for(int i=0;i<26;i++) if(f1[i]!=f2[i]) return 0;
        for(int i=0;i<A.length();i++)
        {
            if(A[i]==B[i]) same[A[i]-'a']++;
            else {diff++;
                  if(diff==1) {c[0]=A[i];c[1]=B[i];}
                  else if(diff==2) {c[2]=A[i];c[3]=B[i];}
                 }
        }
        if(diff>2) return 0;
        else if(diff==2)
        {
            if(c[0]==c[3] && c[1]==c[2]) return 1;
            else return 0;
        }
        else{
            for(int i=0;i<26;i++)
            {
                if(same[i]>=2) return 1;
            }
        }
        
        return 0;
        
        
    }
};
