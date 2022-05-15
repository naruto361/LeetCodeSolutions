[All Ancestors of a Node in a Directed Acyclic Graph](https://leetcode.com/problems/number-of-restricted-paths-from-first-to-last-node/)
```cpp
class Solution {
private:
    void dfs(vector<bool> &vis,int i,vector<vector<int>> &v,vector<int> &temp)
    {
        for(auto &j:v[i])
        {
            if(!vis[j])
            {
                vis[j]=true;
                temp.push_back(j);
                dfs(vis,j,v,temp);
            }
        }
    }
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> v(n);
        for(auto &i:edges)
        {
            v[i[1]].push_back(i[0]);
        }
        vector<vector<int>> ans;
        
        for(int i=0;i<n;i++)
        {
            if(v[i].size()==0) {ans.push_back({});continue;}
            vector<bool> vis(n,false);
            vector<int> temp;
            vis[i]=true;
            dfs(vis,i,v,temp);
            sort(temp.begin(),temp.end());
            ans.push_back(temp);
        }
        return ans;
    }
};
```
