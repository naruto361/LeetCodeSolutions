## [Find Center of Star Graph](https://leetcode.com/problems/find-center-of-star-graph/)
```cpp
int findCenter(vector<vector<int>>& edges) {
        map<int,int> mp;
        for(int i=0;i<edges.size();i++)
        {
            for(auto x:edges[i])
            {
                mp[x]++;
            }
        }
        int maxi=-1;
        int ans=0;
        for(auto x:mp)
        {
            if(x.second>maxi)
            {
                maxi=x.second;
                ans=x.first;
            }
        }
        return ans;
        
    }
```
