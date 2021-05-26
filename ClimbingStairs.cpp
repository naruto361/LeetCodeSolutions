int climbStairs(int n) {
        if(n<=3) return n;
        int f=3,s=2;
        for(int i=4;i<=n;i++)
        {
            int k=f;
            f=f+s;
            s=k;
        }
        return f;
    }
