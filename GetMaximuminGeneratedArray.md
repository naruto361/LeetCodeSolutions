## Get Maximum in Generated Array
```
int getMaximumGenerated(int n) {
        if(n<2) return n;
        int f[100+1]={0};
        f[0]=0,f[1]=1;
        f[2]=1;
        for(int i=3;i<=n;i++)
        {
            if(i%2==0) f[i]=f[i/2];
            else
            {
                f[i]=f[i/2]+f[i/2 +1];
            }
        }
        int maxi=0;
        for(int i=0;i<=n;i++) maxi=max(maxi,f[i]);
        return maxi;
    }
    ```
