class Solution {
public:
    int maxPower(string s) {
        int ans=1,best=1;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1]) {ans++;best=max(ans,best);}
            else ans=1;
        }
        return best;
    }
};
