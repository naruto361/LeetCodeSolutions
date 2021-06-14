bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> v(1001,0);
        int maxi=0;
        for(auto &i:trips)
        {
            v[i[1]]+=i[0];
            v[i[2]]-=i[0];
            maxi=max(maxi,max(i[1],i[2]));
        }
        int ans=0;
        if(v[0]>capacity) return 0;
        bool ok=true;
        for(int i=1;i<=maxi;i++)
        {
            v[i]+=v[i-1];
            if(v[i]>capacity) ok=false;
        }
        //for(int i=0;i<=maxi;i++) cout<<v[i]<<" ";
        return ok;
    }
