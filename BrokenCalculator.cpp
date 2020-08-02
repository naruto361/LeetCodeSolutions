class Solution {
public:
    int brokenCalc(int m, int n) {
        if (m == n) 
        return 0; 
        if (m > n) 
            return m - n; 
        if (m <= 0 && n > 0) 
            return -1; 
        if (n % 2 == 1) 
            return 1 + brokenCalc(m, n + 1); 
        else
            return 1 + brokenCalc(m, n / 2); 
    }
};
