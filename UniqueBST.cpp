class Solution {
public:
    long long binomialCoeff(long long n, long long k) 
    { 
        long long res = 1; 
        if (k > n - k) 
        k = n - k; 
        long long i;
        for (i = 0; i < k; ++i) 
        { 
            res *= (n - i); 
            res /= (i + 1); 
        } 

        return res; 
    } 
    int numTrees(int n) {
        long long ans = binomialCoeff(1LL*2*n,1LL*n);
        return ans/(n+1);
    }
};

//////////////////////////////////////////////////////////

int numTrees(int n) {
        if(n<3) return n;
        vector<int> dp(n+1);
        dp[0]=dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                dp[i]+=dp[j]*dp[i-j-1];
            }
        }
        return dp[n];
    }
