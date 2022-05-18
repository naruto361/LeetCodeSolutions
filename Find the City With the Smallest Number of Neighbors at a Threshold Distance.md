[Find the City With the Smallest Number of Neighbors at a Threshold Distance](https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/)
```
FLOYD WARSHALL - O(N^3)
```
```cpp
class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> dist(n,vector<int> (n,-1));
        for(auto &i:edges)
        {
            dist[i[0]][i[1]]=i[2];
            dist[i[1]][i[0]]=i[2];
        }
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                if(i==k) continue;
                for(int j=0;j<n;j++)
                {
                    if(dist[i][k]==-1 || dist[k][j]==-1) continue;
                    else if(dist[i][j]==-1) dist[i][j]=dist[i][k]+dist[k][j];
                    else dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                }
            }
        }
        int ans=0;
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int temp=0;
            for(int j=0;j<n;j++)
            {
                if(i==j) continue;
                if(dist[i][j]!=-1 && dist[i][j]<=distanceThreshold)
                    ++temp;
            }
            if(temp<=mini)
            {
                mini=temp;
                ans=i;
            }
        }
        return ans;
    }
};
```
