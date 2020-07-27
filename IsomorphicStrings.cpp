class Solution {
public:
    bool isIsomorphic(string str1, string str2) {
        int m = str1.length(), n = str2.length();
        if (m != n) 
            return false;  
        bool marked[1000] = {false}; 
        int map[1000]; 
        memset(map, -1, sizeof(map)); 
        for (int i = 0; i < n; i++) 
        { 
            if (map[str1[i]] == -1) 
            { 
                if (marked[str2[i]] == true) 
                    return false; 
                marked[str2[i]] = true; 
                map[str1[i]] = str2[i]; 
            }  
            else if (map[str1[i]] != str2[i]) 
                return false; 
        } 
        return true; 
        }
};
