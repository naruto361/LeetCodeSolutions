```cpp
class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int> parent(2001,0);
        for(int i=1;i<=2000;i++) parent[i]=i;
        vector<int> ans;
        for(auto &i:edges)
        {
            int u=i[0],v=i[1];
            while(u!=parent[u]) u=parent[u];
            while(v!=parent[v]) v=parent[v];
            if(u==v)
            {
                ans=i;
            }
            else parent[v]=u;// parent[u]=v also works
        }
        return ans;
    }
};
```
