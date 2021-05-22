bool areAlmostEqual(string s1, string s2) {
        if(s1.length()!=s2.length()) return 0;
        int f1[26]={0};
        int f2[26]={0};
        int c=0;
        for(int i=0;i<s1.length();i++)
        {
            f1[s1[i]-'a']++;
            f2[s2[i]-'a']++;
            if(s1[i]!=s2[i]) c++;
        }
        for(int i=0;i<26;i++)
        {
            if(f1[i]!=f2[i]) return 0;
        }
        if(c==1 || c>2) return 0;
        return 1;
    }
