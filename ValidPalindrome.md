## [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)
```cpp
bool isPalindrome(string s) {
        string s1;
        for(char c:s)
        {
            if(c>='A' && c<='Z') s1+=c+32;
            else if((c>='a' && c<='z') || (c>='0' && c<='9')) s1+=c;
        }
        string s2=s1;
        reverse(s1.begin(),s1.end());
        return s2==s1; 
    }
```
