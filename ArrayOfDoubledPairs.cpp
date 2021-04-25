bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int,int> mp;
        int ans=0;
        sort(arr.begin(),arr.end());
        for(int i:arr) mp[i]++;
        for(int i:arr)
        {
            if(mp[i]>0)
            if(mp[2*i]>0)
            {
                if(i==0)
                {
                    ans+=mp[0]/2;
                    mp[0]=0;
                }
                else{
                ans++;
                mp[i]--;
                mp[2*i]--;
                }
            }
        }
        return ans==arr.size()/2;
        
    }
