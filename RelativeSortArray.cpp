vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mp;
        vector<int> v;
        for(auto i:arr1)
        {
            mp[i]++;
        }
        for(auto i:arr2)
        {
            if(mp[i]>0)
            {
                int t=mp[i];
                while(t--)
                {
                    v.push_back(i);
                }
                mp[i]=-1;
            }
        }
        int l=v.size();
        for(auto i:arr1)
        {
            if(mp[i]>0) v.push_back(i);
        }
        sort(v.begin()+l,v.end());
        return v;
    }
