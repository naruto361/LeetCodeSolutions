class Solution {
public:
    int factorial(int n) 
{ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
}
    int countNumbersWithUniqueDigits(int n) {
        if(n>10) return 0;
        int f[11];
        f[0]=1;
        f[1]=9;
        f[2]=81;
        for(int i=1;i<=n;i++)
        f[i]= (9 * factorial(9) / factorial(10 - i)) + f[i-1];
        return f[n];
    }
};
