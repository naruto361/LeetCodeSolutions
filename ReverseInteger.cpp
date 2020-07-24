class Solution {
public:
    long long int reverse(long long int x) {
        long long int rev_num = 0; int k=0;
        if(x<0) k=1;
        x=abs(x);
    while(x > 0) 
    { 
        rev_num = rev_num*10 + x%10; 
        x = x/10; 
    } 
        if(rev_num>2147483647) return 0;
        if(k==1)
         return -rev_num; 
        else return rev_num;
    }
};
