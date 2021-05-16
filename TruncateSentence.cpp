string truncateSentence(string s, int k) {
        int x=0;
        string t;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ') x++;
            if(x==k) break;
            t+=s[i];
        }
        return t;
    }
