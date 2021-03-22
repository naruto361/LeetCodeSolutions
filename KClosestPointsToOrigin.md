## [K Closest Points To Origin](https://leetcode.com/problems/k-closest-points-to-origin/)
```cpp
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
        {   
            return (a.first*a.first + a.second*a.second <
                   b.first*b.first + b.second*b.second );
        }
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int,int>> v;
        for(int i=0;i<points.size();i++)
        {
            v.push_back(make_pair(points[i][0],points[i][1]));
        }
        sort(v.begin(),v.end(),sortbysec);
        vector<vector<int>> ans;
        int l=0;
        for(auto i:v)
        {
            l++;
            ans.push_back({i.first,i.second});
            if(l==k) break;
        }
        return ans;
    }
};
```
