class Solution {
public:
    bool hasAlternatingBits(int n) {
        int b[32]; 
        int i = 0; 
        while (n > 0) 
        { 
        b[i] = n % 2; 
        n = n / 2; 
        i++; 
        } 
        for(int j=1;j<=i-1;j++)
        {
            if(b[j]==b[j-1]) return 0;
        }
        return 1;
    }
};
