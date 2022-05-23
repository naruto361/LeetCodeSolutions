```cpp
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        if(points.size()<3) return points.size();
        int ans=2;
        for(int i=0;i<points.size()-2;i++)
        {
            for(int j=i+1;j<points.size()-1;j++)
            {
                int temp=2;
                for(int k=j+1;k<points.size();k++)
                {
                    long long int k1=1LL*(points[j][1]-points[i][1])*(points[k][0]-points[j][0]);
                    long long int k2=1LL*(points[j][0]-points[i][0])*(points[k][1]-points[j][1]);
                    if(k1==k2) temp++;
                }
                ans=max(ans,temp);
            }
        }
        return ans;
    }
};
```
