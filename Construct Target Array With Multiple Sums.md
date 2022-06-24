```cpp
class Solution {
public:
    
    bool isPossible(vector<int>& target) {
        priority_queue<int> pq(target.begin(),target.end());
        long long int sum=0;
        for(auto &i:target) sum += i;
        while(1)
        {
            int x=pq.top();
            pq.pop();
            sum -= x;
            if(x==1 || sum==1) return true;
            if(x<sum || sum==0 || x%sum==0) return false;
            x%=sum;
            sum += x;
            pq.push(x);
        }
        return false;
    }
};
```

```
9,3,5
// start from BACK i.e 9,5,3 
// NOT FROM 1,1,1 
// USE PQ

total = 17
a=9
total=8 (17-9)
a=1 //9%8;

total=9 5,3,1
a=5
total=4 (9-5)
a=1 // 5%4

total=5 3,1,1
a=3
total=2 (5-3)
a=1 //3%2

total=3 1,1,1
a=1
a==1 return true;

```
