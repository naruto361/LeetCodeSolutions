class Solution {
public:
    int findComplement(int n) {
        int b[32]; 
        int i = 0; 
        while (n > 0) 
        { 
            b[i] = n % 2; 
            n = n / 2; 
            i++; 
        }
        for(int j=i-1;j>=0;j--)
        {
            if(b[j]==0) b[j]=1;
            else b[j]=0;
        }
        long long int ans=0,p=1;
        for(int j=0;j<=i-1;j++)
        {
            ans+=b[j]*p;
            p*=2;
        }
        return ans;
    }
};
