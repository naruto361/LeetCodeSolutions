[Minimum Number of Steps to Make Two Strings Anagram II](https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram-ii/)
```cpp
class Solution {
public:
    int minSteps(string s, string t) {
        int f1[26]={0} , f2[26]={0};
        for(char &c:s) f1[c-'a']++;
        for(char &c:t) f2[c-'a']++;
        int ans=0;
        for(int i=0;i<26;i++)
        {
            ans += abs(f1[i]-f2[i]);
            // if(f1[i]>0 || f2[i]>0)
            // cout<<char(i+'a')<<" : "<<f1[i]<<" "<<f2[i]<<'\n';
        }
        return ans;
    }
};
```
