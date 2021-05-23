int countCharacters(vector<string>& words, string chars) {
        int f[26]={0};
        for(char c:chars) f[c-'a']++;
        int ans=0;
        for(string s:words)
        {
            int f1[26]={0};
            bool check=1;
            for(char c:s)
            {
                f1[c-'a']++;
                if(f1[c-'a']>f[c-'a']) check=0;
                if(check==0) break;
            }
            if(check) ans+=s.length();
        }
        return ans;
    }
