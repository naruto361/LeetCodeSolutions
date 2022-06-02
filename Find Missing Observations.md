```cpp
class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum=0;
        for(auto &i:rolls) sum += i;
        int target = mean*(rolls.size()+n) - sum;
        // make target with n elements where 1<=a[i]<=6
        if(target<n || target>6*n) return {};
        vector<int> ans(n,target/n);
        int rem=target%n;
        int i=0;
        while(rem>0) 
        {
            ans[i]+=1;
            rem--;
            i++;
        }
        return ans;
    }
};
```
