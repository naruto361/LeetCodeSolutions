int consecutiveNumbersSum(int N) {
        int ans=0;
        int sum=0;
        for(int i=1;sum<N;i++)
        {
            sum+=i;
            if((N-sum)%i==0) ans++;
        }
        return ans;
    }
//https://www.youtube.com/watch?v=5Kl8q9kqlNg
//3:24
