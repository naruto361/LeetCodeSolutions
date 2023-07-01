```cpp
class Solution {
public:
    int ans=INT_MAX;
    void solve(int idx,vector<int> &v,int k,vector<int> &cookies) {
        if(idx==cookies.size()) {
            int maxi=-1;
            for(int i=0;i<k;i++) maxi=max(maxi,v[i]);
            ans=min(ans,maxi);
            return ;
        }
        for(int i=0;i<k;i++) {
            v[i]+=cookies[idx];
            solve(idx+1,v,k,cookies);
            v[i]-=cookies[idx];
        }
        
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> v(k,0);
        solve(0,v,k,cookies);
        return ans;
    }
};
```
