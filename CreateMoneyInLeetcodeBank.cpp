int totalMoney(int n) {
        int f[1000+1];
        for(int i=1;i<=7;i++) f[i]=i;
        for(int i=8;i<=n;i++) f[i]=1+f[i-7];
        int ans=0;
        for(int i=1;i<=n;i++) ans+=f[i];
        return ans;
    }
