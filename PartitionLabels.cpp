vector<int> partitionLabels(string S) {
        vector<int> ans;
        vector<vector<int>> v(26,vector<int> (2,-1));
        for(int i=0;i<S.length();i++)
        {
            if(v[S[i]-'a'][0]==-1)
            v[S[i]-'a'][0]=i;
            v[S[i]-'a'][1]=i;
        }
        int f=v[S[0]-'a'][0],s=v[S[0]-'a'][1];
        for(int i=1;i<S.length();i++)
        {
            if(v[S[i]-'a'][0]>s)
            {
                ans.push_back(s-f+1);
                f=v[S[i]-'a'][0];
                s=v[S[i]-'a'][1];
                if(i==S.length()-1) ans.push_back(f-s+1);
            }
            else if(v[S[i]-'a'][0]<s)
            {
                f=min(f,v[S[i]-'a'][0]);
                s=max(s,v[S[i]-'a'][1]);
                if(i==S.length()-1) ans.push_back(s-f+1);
            }
        }
        return ans;
        
    }
