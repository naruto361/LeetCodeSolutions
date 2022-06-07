```cpp
class Solution {
public:
// FLOYD WARSHALL
    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& ps, vector<vector<int>>& q) {
        vector<vector<bool>> adj(n,vector<bool> (n,false));
        for(auto &i:ps) adj[i[0]][i[1]]=true;
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                if(i==k) continue;
                for(int j=0;j<n;j++)
                {
                    if(!adj[i][k] || !adj[k][j]) continue;
                    adj[i][j]=(adj[i][k] || adj[k][j]);
                }
            }
        }
        vector<bool> ans;
        for(auto &i:q)
        {
            if(adj[i[0]][i[1]]) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};
```
