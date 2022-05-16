[Shortest Path in Binary Matrix](https://leetcode.com/problems/shortest-path-in-binary-matrix/)
```cpp
class Solution {
    private:
    vector<int> dirx={0,0,1,1,1,-1,-1,-1};
    vector<int> diry={1,-1,0,1,-1,0,1,-1};
    bool isValid(int i,int j,int l)
    {
        if(i<0 || j<0 || i>=l || j>=l) return false;
        return true;
    }
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int l=grid.size();
        if(grid[0][0]==1 || grid[l-1][l-1]==1) return -1;
        queue<pair<int,int>> q;
        q.push({0,0});
        
        vector<vector<int>> dist(l,vector<int> (l,-1));
        dist[0][0]=1;
        while(!q.empty())
        {
            int n=q.size();
            while(n--)
            {
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                for(int k=0;k<8;k++)
                {
                    int i=x+dirx[k];
                    int j=y+diry[k];
                    if(isValid(i,j,l) && grid[i][j]==0 && dist[i][j]==-1)
                    {
                        //cout<<i<<" "<<j<<" valid\n";
                        dist[i][j]=1+dist[x][y];
                        q.push({i,j});
                    }
                }
            }
        }
        // for(int i=0;i<l;i++)
        // {
        //     for(int j=0;j<l;j++)
        //     {
        //         cout<<dist[i][j]<<" ";
        //     }
        //     cout<<'\n';
        // }
        return dist[l-1][l-1];
    }
};
```
