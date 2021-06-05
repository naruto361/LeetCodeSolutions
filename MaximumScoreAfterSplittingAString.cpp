int maxScore(string s) {
        int l=s.length();
        vector<int> zero(l,0);
        vector<int> one(l,0);
        if(s[0]=='0') zero[0]=1;
        for(int i=1;i<l;i++)
        {
            zero[i]=zero[i-1];
            if(s[i]=='0') zero[i]++;
        }
        if(s[l-1]=='1') one[l-1]=1;
        for(int i=l-2;i>=0;i--)
        {
            one[i]=one[i+1];
            if(s[i]=='1') one[i]++;
        }
        int ans=0;
        for(int i:zero) cout<<i<<" ";
        cout<<endl;
        for(int i:one) cout<<i<<" ";
        for(int i=1;i<l;i++)
        {
            ans=max(ans,zero[i-1]+one[i]);
        }
        return ans;
    }
