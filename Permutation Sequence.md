[Tutorial Link](https://www.youtube.com/watch?v=W9SIlE2jhBQ)

```cpp
class Solution {
public:
    vector<int> fact,digits;
    void solve(string &ans,int n,int k)
    {
        if(n==1)
        {
            ans += to_string(digits.back());
            return ;
        }
        int idx=k/fact[n-1];
        if(k%fact[n-1]==0) idx--;
        ans += to_string(digits[idx]);
        digits.erase(digits.begin()+idx);
        k-=fact[n-1]*idx;
        solve(ans,n-1,k);
    }
    string getPermutation(int n, int k) {
        fact.push_back(1);
        int f=1;
        for(int i=1;i<=n;i++)
        {
            f*=i;
            fact.push_back(f);
            digits.push_back(i);
        }
        string ans;
        solve(ans,n,k);
        return ans;
    }
};
```
