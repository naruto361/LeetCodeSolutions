int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>ans) ans=mp[nums[i]];
        }
        map<int,pair<int,int>> v;
        for(auto i:mp)
        {
            if(i.second==ans) v[i.first]={nums.size(),0};
        }
        int mini=1e9;
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]==ans)
            {
                v[nums[i]].first=min(v[nums[i]].first,i);
                v[nums[i]].second=max(v[nums[i]].first,i);
            }
        }
        for(auto i:v)
        {
            mini=min(mini,i.second.second-i.second.first+1);
        }
        return mini;
    }
