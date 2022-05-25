```
we sort in such a way that a[0]>b[0] && if a[0]==b[0]
 then a[1]<b[1]
 For each i , we know that p[i-1][0]>=p[i][0].
 When p[i-1][0]==p[i][0] , then by a[1]<b[1] . This maintains our ans.
 [[2,10],[10,2],[4,4],[4,6],[5,7]]
 sorted vector : {[10,2],[5,7],[4,4],[4,6],[2,10]]
 ```

```cpp
bool sortbyfunc(vector<int> &a,vector<int> &b)
{
    if(a[0]==b[0]) return a[1]<b[1];
    return a[0]>b[0];
}
class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& p) {
        sort(p.begin(),p.end(),sortbyfunc);
        int ans=0;
        int maxdef=p[0][1];
        for(int i=1;i<p.size();i++)
        {
            if(p[i][1]<maxdef) ++ans;
            maxdef=max(maxdef,p[i][1]);
        }
        return ans;
    }
};
```
