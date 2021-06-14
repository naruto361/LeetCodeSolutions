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
