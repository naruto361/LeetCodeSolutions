int countBinarySubstrings(string s) {
        int ans=0;
        int one=0,zero=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                zero=0;
                while(s[i]=='0')
                {
                    zero++;i++;
                }
                i--;
                ans+=min(zero,one);
            }
            else
            {
                one=0;
                while(s[i]=='1')
                {
                    one++;i++;
                }
                i--;
                ans+=min(zero,one);
            }
        }
        return ans;
    }
