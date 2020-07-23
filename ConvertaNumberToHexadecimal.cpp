class Solution {
public:
    string toHex(int num) 
    {
        map<int, char> m; 
        char digit = '0'; 
        char c = 'a'; 
        for (int i = 0; i <= 15; i++) 
        { 
            if (i < 10) m[i] = digit++; 
            else    m[i] = c++;
        } 
    string res = ""; 
    if (!num)    return "0"; 
    if (num > 0) 
    { 
        while (num) 
        { 
            res = m[num % 16] + res; 
            num /= 16; 
        } 
    } 
    else 
    {  
        u_int n = num; 
        while (n) 
        { 
            res = m[n % 16] + res; 
            n /= 16; 
        } 
    } 
    return res;
    }
};
