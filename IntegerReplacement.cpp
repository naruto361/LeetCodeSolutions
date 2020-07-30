class Solution {
public:
    int integerReplacement(long long int n) {
        if(n==1) return 0;
        int r=0;
        while(n!=1)
        {
            if(n%2==0) n/=2;
            else 
            {   if(__builtin_popcount(n-1)==1) n--;
                else if(__builtin_popcount(n+1)==1 ||(n+1)%4==0) n++;
                else n--;
            }
            r++;
        }
        return r;
        
        
    }
};
