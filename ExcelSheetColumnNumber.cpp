class Solution {
public:
    int titleToNumber(string s) {
        int n=0;
        int k=1;
        n=(s[s.length()-1]-'A')+1;
        for(int i=s.length()-2;i>=0;i--)
        {   
            n+=((s[i]-'A')+1) * pow(26,k);
            k++;
        }
        return n;
    }
};
