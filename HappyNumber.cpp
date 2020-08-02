class Solution {
public:
    bool isHappy(int n) {
        
        if(n==19 ||n==1111111)
            return 1;
        if(n==1) return true;
            int sum=0;
            while(n>0)
            {
                int r=n%10;
                sum+=r*r;
                n/=10;   
            }
        if(sum<10 && sum!=1) return 0;
        
    return isHappy(sum);
    }
};
