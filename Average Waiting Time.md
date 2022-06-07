```
FCFS -> First Come First Serve
```

```cpp
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        // FCFS first come first serve
        double prev=0;
        double sum=0,ans=0;
        for(auto &i:customers)
        {
            prev=max(prev,(double)i[0]);
            sum = (double)i[1]+prev;
            ans += sum-(double)i[0];
            //cout<<prev<<' '<<sum<<' '<<ans<<'\n';
            prev=sum;
        }
        return ans/(double)customers.size();
    }
};
```
