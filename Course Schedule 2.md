## KAHN'S ALGO (STACK)
```
class Solution {
public:
// use BFS 
    bool cycle;
    void dfs(int node,vector<vector<int>> &adj,vector<bool> &vis,stack<int> &st,vector<bool> &repeat)
    {
        vis[node]=true;
        repeat[node]=true;
        for(auto &child:adj[node])
        {
            if(!vis[child])
            {
                dfs(child,adj,vis,st,repeat);
            }
            else if(repeat[child])
            {
                cycle=true;
            }
        }
        repeat[node]=false;
        st.push(node);
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto &i:prerequisites)
        {
            adj[i[0]].push_back(i[1]);
            //adj[i[1]].push_back(i[0]);
        }
        vector<bool> vis(numCourses,false);
        vector<bool> repeat(numCourses,false);
        stack<int> st;
        for(int i=0;i<numCourses;i++)
        {
            if(!vis[i])
            {
                dfs(i,adj,vis,st,repeat);
            }
        }
        if(cycle) return {};
        vector<int> indegree(numCourses,0);
        for(auto &i:prerequisites)
        {
            indegree[i[1]]++;
        }
        vector<int> ans;
        queue<int> q;
        for(int i=0;i<numCourses;i++)
        {
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto &child:adj[node])
            {
                indegree[child]--;
                //cout<<child<<" "<<indegree[child]<<'\n';
                if(indegree[child]==0) q.push(child);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
```
## KAHN'S ALGO (BFS + QUEUE)

```cpp
class Solution {
private:
    vector<int> kahnsalgo(vector<vector<int>> &adj,vector<int> &degree,int n)
    {
        vector<int> res;
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            if(degree[i]==0) q.push(i);
        }
        int count=0;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto &child:adj[node])
            {
                degree[child]--;
                if(degree[child]==0) q.push(child);
            }
            res.push_back(node);
            count++;
        }
        if(count==n) return res;
        return {};
    }
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> degree(numCourses,0);
        for(auto &i:prerequisites)
        {
            adj[i[1]].push_back(i[0]);
            degree[i[0]]++;
        }
        
        //if(cycle(adj,numCourses)) return {}; DELETED THIS PART FOR COUNT==N
        
        //vector<int> res;
        
        return kahnsalgo(adj,degree,numCourses);
        //return res;
        
    }
};
```


## USING DFS

```
class Solution {
public:
    void dfs(int i,vector<bool> &vis,vector<vector<int>> &v,stack<int> &st)
    {
        if(vis[i]) return ;
        vis[i]=true;
        for(auto &j:v[i])
        {
            if(!vis[j])
            {
                dfs(j,vis,v,st);
                
            }
        }
        st.push(i);
    }
    bool cycle(int i,vector<vector<int>> &v,vector<int> &visited)
    {
        if(visited[i]==2) return true;
        visited[i]=2;
        for(auto &j:v[i])
        {
            if(visited[j]!=1)
            {
                if(cycle(j,v,visited)) return true;
            }
        }
        visited[i]=1;
        return false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<bool> vis(numCourses,false);
        vector<int> visited(numCourses,0);
        vector<vector<int>> v(numCourses);
        vector<int> ans;
        stack<int> st;
        for(auto &i:prerequisites)
        {
            v[i[0]].push_back(i[1]);
        }
        // if cycle prsent
        // i.e not DAG return {}
        for(int i=0;i<numCourses;i++)
        {
            if(cycle(i,v,visited)) return {};
        }
        
        for(int i=0;i<numCourses;i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,v,st);
            }
        }
        while(!st.empty()) {ans.push_back(st.top());st.pop();}
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
```
