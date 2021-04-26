int nextGreaterElement(int n) {
        if(n<12) return -1;
        string t=to_string(n);
        string s=to_string(n);
        int c=1;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]<s[i+1]) c=0;
        }
        if(c==1) return -1;
        sort(s.begin(),s.end());
        do
        {
            if(s>t)
            {
                long ans=0;
                for(int i=0;i<s.length();i++) ans=ans*10 +s[i]-'0';
                if(ans<0 || ans>=2147483648) return -1;
                return (int)ans;
            }
        }while(next_permutation(s.begin(),s.end()));
        return -1;
    }
