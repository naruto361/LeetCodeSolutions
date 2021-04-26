double myPow(double x, int n) {
        int t=n;
        n=abs(n);
        double ans=1;
            while(n>0)
            {
                if(n&1)
                    ans *= x;
                x *= x;
                n=n>>1;
            }  
        return t>0? ans:1/ans;
    }
