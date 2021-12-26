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
```cpp


class Solution {
private:
    struct compare{
        bool operator()(vector<int> &a,vector<int> &b)
        {
            return a[0]*a[0] + a[1]*a[1] < b[0]*b[0] + b[1]*b[1];
        }
    };
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    // ********************** PQ functional sorting ***************
        priority_queue<vector<int> , vector<vector<int>> , compare> pq;
        for(auto &i:points)
        {
            if(pq.size()<k) pq.push(i);
            else 
            {
                int dist=i[0]*i[0] + i[1]*i[1];
                int pqtop=pq.top()[0]*pq.top()[0] + pq.top()[1]*pq.top()[1];
                if(dist<pqtop)
                {
                    pq.pop();
                    pq.push(i);
                }
            }
            //cout<<pq.top()[0]<<" "<<pq.top()[1]<<'\n';
        }
        vector<vector<int>> ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};
```
