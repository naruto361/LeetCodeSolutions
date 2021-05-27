int leastInterval(vector<char>& tasks, int n) {
        //if(n==0) return tasks.size();
        unordered_map<char,int> mp;
        int maxi=0;
        for(char c:tasks)
        {
            mp[c-'A']++;
            maxi=max(maxi,mp[c-'A']);
        }
        int ans=0;
        for(auto i:mp)
        {
            if(i.second==maxi) ans++;
        }
        ans+=(maxi-1)*(n+1);
        return max(ans,(int)tasks.size());
    }
