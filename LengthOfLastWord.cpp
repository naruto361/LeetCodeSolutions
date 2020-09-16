class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=0,k=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ') {if(l!=0) k=l;l=0;}
            else l++;
        }
        if(s.length()==0) return l;
        if(s[s.length()-1]==' ' || l==0)
        return k;
        return l;
    }
};
