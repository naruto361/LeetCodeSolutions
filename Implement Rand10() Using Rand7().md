```
I started with i<10 , it worked.
Then found lower bound for n such that it works, then n=5 comes out as lower limit.
works  from n=5
FOR N=5
rand()+rand()+rand()+rand()+rand()
7*7*7*7*7 = 16807 combinations
from how many combinations such that probability of 1 to 10 in sum of the combinations is equally likely.
return (sum)%10 +1.
```

```cpp
int rand10() {
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum += rand7();
        }
        return (sum%10)+1;
    }
```
*****************************************
```
// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() {
         int rand20 = 20;
      while(rand20 >= 20){
         rand20 = (rand7() - 1) * 7 + (rand7() - 1);
      }
      return rand20 % 10 + 1;
    }
};
```
