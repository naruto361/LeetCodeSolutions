## METHOD 1
```
class Solution {
public:
    bool dfs(int node,vector<vector<int>> &adj,vector<bool> &vis,vector<bool> &st)
    {
        vis[node]=true;
        st[node]=true;
        // vis[i]=2;
        for(auto &child:adj[node])
        {
            if(!vis[child])
            {
                if(dfs(child,adj,vis,st)) return true;
            }
            else if(st[child]) return true; // if(vis[i]==2) , we detect cycle
        }
        st[node]=false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto &i:prerequisites)
        {
            adj[i[0]].push_back(i[1]);
        }
        vector<bool> vis(numCourses,false) , st(numCourses,false);
        for(int i=0;i<numCourses;i++)
        {
            if(!vis[i])
            {
                if(dfs(i,adj,vis,st)) return false;//cycle , so we cannot complete course
            }
        }
        // no cycle , so we can complete courses
        return true;
    }
    
};
```

## METHOD 2
```
bool cycle(vector<vector<int>> &v,vector<int> &vis,int i)
    {
        if(vis[i]==2) return true;
        vis[i]=2;
        for(auto j:v[i])
        {
            if(vis[j]!=1)
            {
                if(cycle(v,vis,j)) return true;
            }
        }
        vis[i]=1;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        if(prerequisites.size()<2) return true;
        vector<vector<int>> v(numCourses);
        vector<int> vis(numCourses,0);
        for(auto i:prerequisites)
        {
            v[i[0]].push_back(i[1]);
        }
        for(int i=0;i<numCourses;i++)
        {
            if(cycle(v,vis,i)) return false;
        }
        return true;
    }
```
