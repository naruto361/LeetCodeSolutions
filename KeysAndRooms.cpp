class Solution {
public:
    // connected components : 1
    void dfs(vector<vector<int>> &a,vector<bool> &vis,int node)
    {
        vis[node]=1;
        //cout<<node<<" ";
        for(auto &child:a[node])
        {
            if(!vis[child])
            {
                dfs(a,vis,child);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<vector<int>> a(rooms.size());
        vector<bool>vis(rooms.size(),false);
        for(int i=0;i<rooms.size();i++)
        {
            for(int j=0;j<rooms[i].size();j++) 
                a[i].push_back(rooms[i][j]);
        }
        int ans=0;
        for(int i=0;i<rooms.size();i++)
        {
            if(!vis[i])
            {
                ans++;
                dfs(a,vis,i);
                cout<<"\n";
            }
        }
    return ans==1;
    }
};
