class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        int f[26]={0};
        for(char &c:licensePlate)
        {
            if(c>='a' && c<='z') f[c-'a']++;
            else if(c>='A' && c<='Z') f[c-'A']++;
        }
        string ans;
        for(string &s:words)
        {
            int f1[26]={0};
            for(char &c:s) f1[c-'a']++;
            bool ok=true;
            for(int i=0;i<26;i++)
            {
                if(f1[i]<f[i]) {ok=false;break;}
            }
            if(ok)
            {
                if(ans.length()==0)
                {
                    ans=s;
                }
                else if(s.length()<ans.length()) ans=s;
            }
        }
        return ans;
    }
};
