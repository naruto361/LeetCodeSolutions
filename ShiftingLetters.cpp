string shiftingLetters(string s, vector<int>& shifts) {
        int ans=0;
        //for(int i=shifts.size()-2;i>=0;i--) shifts[i]=(shifts[i]+shifts[i+1])%26;
        for(int i=shifts.size()-1;i>=0;i--)
        {
            ans=(ans+shifts[i])%26;
            int c=(s[i]-'a'+ans)%26;
            s[i]=c+97;
        }
        return s;
    }
