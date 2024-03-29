class Solution {
public:
    int tribonacci(int n) {
        if(n==0 || n==1) return n;
        int f[n+1];
        f[0]=0;f[1]=1;f[2]=1;
        for(int i=3;i<=n;i++)
        {
            f[i]=f[i-1]+f[i-2]+f[i-3];
        }
        return f[n];
    }
};
/////////////////////////////////////////////////////
class Solution {
public:
    int tribonacci(int n) {
        if(n<2) return n;
        if(n==2) return 1;
        int a=0,b=1,c=1;
        for(int i=3;i<n;i++)
        {
            int t=c;
            c+=a+b;
            a=b;
            b=t;
        }
        return a+b+c;
    }
};
