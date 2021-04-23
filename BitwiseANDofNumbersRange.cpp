int msb(int t)
    {
        int pos=-1;
        while(t>0)
        {
            t/=2;
            pos++;
        }
        return pos;
    }
    int rangeBitwiseAnd(int left, int right) {
        int ans=0;
        while(left && right)
        {
            int p1=msb(left),p2=msb(right);
            if(p1!=p2) return ans;
            ans+=(1<<p1);
            left-=(1<<p1);
            right-=(1<<p1);
            
        }
        return ans;  
    }
