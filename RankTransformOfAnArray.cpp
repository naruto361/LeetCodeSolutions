
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]=i;
        }
        int rank=1;
        for(auto i:m)
        {
            arr[i.second]=rank++;
        }
        return arr;
    }

######################################

vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size()==0) return {};
        vector<int> v=arr;
        sort(v.begin(),v.end());
        unordered_map<int,int> mp;
        mp[v[0]]=1;
        int k=1;
        for(int i=1;i<v.size();i++)
        {
            if(v[i]!=v[i-1])
            {
                mp[v[i]]=++k;
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=mp[arr[i]];
        }
        return arr;
    }
