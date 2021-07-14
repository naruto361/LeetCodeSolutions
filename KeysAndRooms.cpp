class Solution {
public:
    // connected components : 1
    void dfs(vector<vector<int>> &rooms,vector<bool> &vis,int node)
    {
        vis[node]=1;
        //cout<<node<<" ";
        for(auto &child:rooms[node])
        {
            if(!vis[child])
            {
                dfs(rooms,vis,child);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool>vis(rooms.size(),false);
        int ans=0;
        for(int i=0;i<rooms.size();i++)
        {
            if(!vis[i])
            {
                ans++;
                dfs(rooms,vis,i);
                cout<<"\n";
            }
        }
    return ans==1;
    }
};
