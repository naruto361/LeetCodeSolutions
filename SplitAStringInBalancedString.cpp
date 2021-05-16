int balancedStringSplit(string s) {
        int ans=0,x=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='R') x++;
            else x--;
            if(x==0) ans++;
        }
        return ans;
    }
