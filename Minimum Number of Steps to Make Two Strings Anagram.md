[Minimum Number of Steps to Make Two Strings Anagram](https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/)
```cpp
class Solution {
public:
    int minSteps(string s, string t) {
        int f1[26]={0},f2[26]={0};
        for(char &c:s) f1[c-'a']++;
        for(char &c:t) f2[c-'a']++;
        int ans=0;
        for(int i=0;i<26;i++)
        {
            if(f1[i]>f2[i]) ans += f1[i]-f2[i];
        }
        return ans;
    }
};
```
