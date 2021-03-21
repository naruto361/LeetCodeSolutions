## [Number of Equivalent Domino Pairs](https://leetcode.com/problems/number-of-equivalent-domino-pairs/)
```cpp
int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        if(dominoes.size()==1) return 0;
        map<pair<int,int>,int> mp;
        for(int i=0;i<dominoes.size();i++)
        {
              pair<int,int> p;
              p.first=dominoes[i][0];
              p.second=dominoes[i][1];
              if(p.second<p.first) swap(p.first,p.second);
              mp[p]++;
        }
            int ans=0;
        for(auto i:mp) if(i.second>1) ans+=(i.second*(i.second-1))/2;
            return ans;
    }
```
