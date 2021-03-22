## [Find Nearest Point That Has the Same X or Y Coordinate](https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/)
```cpp
int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans=INT_MAX;
        int j=0;
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]==x || points[i][1]==y)
            {
                if(ans>abs(points[i][0]-x) + abs(points[i][1]-y))
                {ans= abs(points[i][0]-x) + abs(points[i][1]-y) ;
                j=i;}
            }
        }
        return ans==INT_MAX ?  -1:j;
    }
```
