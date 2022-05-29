```cpp
class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> f(n,0);
        for(auto &i:roads)
        {
            f[i[0]]++;
            f[i[1]]++;
        }
        sort(f.begin(),f.end());
        long long ans=0;
        for(int i=0;i<n;i++) ans += 1LL*f[i]*(i+1);
        // // 0-1 -> 1
        // // 1-1 -> 2
        // // 2-1 -> 3
        // // 4-1 -> 4
        // // 3-2 -> 5
        // ans += freq[node]* number assigned to node.
        // ans += 1*1 // for node 0
        // ans += 1*2 // for node 1
        // ans += 1*3 // for node 2
        // ans += 1*4 // for node 4
        // ans += 2*5 // for node 3
            
        return ans;
    }
};

```
