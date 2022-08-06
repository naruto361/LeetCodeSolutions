```cpp
********************  B F S *********************
class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        queue<pair<int,vector<int>>> q;
        q.push({0,{0}});
        while(!q.empty())
        {
            int node=q.front().first;
            vector<int> v=q.front().second;
            q.pop();
            if(node==graph.size()-1)
            {
                ans.push_back(v);
                continue;
            }
            for(auto &i:graph[node])
            {
                vector<int> temp=v;
                temp.push_back(i);
                q.push({i,temp});
                    
            }
        }
        return ans;
    }
};
```

```cpp
******************** D F S + BACKTRACKING **************************
class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> &temp,int node,vector<vector<int>> &graph,vector<bool> &vis)
    {
        temp.push_back(node);
        vis[node]=true;
        if(node==graph.size()-1)
        {
            ans.push_back(temp);
            temp.pop_back();
            vis[node]=false;
            return ;
        }
        for(auto &child:graph[node])
        {
            if(!vis[child])
            {
                solve(temp,child,graph,vis);
            }
        }
        vis[node]=false;
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> temp;
        vector<bool> vis(graph.size(),false);
        solve(temp,0,graph,vis);
        return ans;
    }
};
```
