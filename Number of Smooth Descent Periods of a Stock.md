[Number of Smooth Descent Periods of a Stock](https://leetcode.com/problems/number-of-smooth-descent-periods-of-a-stock/)
```cpp
class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n=prices.size();
        long long ans=n;
        int i=1;
        while(i<n)
        {
            long long sum=0;
            while(i<n && prices[i]+1==prices[i-1])
            {
                sum++;
                ans +=sum;
                i++;
            }
            i++;
        }
        return ans;
    }
};
```
