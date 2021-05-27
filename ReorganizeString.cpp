string reorganizeString(string s) {
        int l=s.length();
        unordered_map<char,int> mp;
        int maxi=0;
        for(char c:s) mp[c]++,maxi=max(maxi,mp[c]);
        if(l%2==0)
        {
            if(maxi>l/2) return "";
        }
        else 
        {if(maxi> l/2+1) return "";}
        priority_queue<pair<int,char>> pq;
        for(auto i:mp)
        {
            pq.push({i.second,i.first});
            
        }
        int i=0;
            while(!pq.empty())
            {
                for(int j=0;j<pq.top().first;j++)
                {
                    s[i]=pq.top().second;
                    i+=2;
                    if(i>=l) i=1;
                }
                pq.pop();
            }
        
        return s;
    }
