## [Reordered Power Of 2](https://leetcode.com/problems/reordered-power-of-2/)
```cpp
bool reorderedPowerOf2(int N) {
        if(N<2) return N;
        if(__builtin_popcount(N)==1) return 1;
        string s=to_string(N);
        sort(s.begin(),s.end());
        long long int k=1;
        while(k<1000000000)
        {
            k=k*2;
            string t=to_string(k);
            sort(t.begin(),t.end());
            if(t==s) return 1;
        }
        return 0;
    }
```
