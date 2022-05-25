[Vowels of all Substrings](https://leetcode.com/problems/vowels-of-all-substrings/)

[Adobe Explanation Link](https://acrobat.adobe.com/link/track?uri=urn:aaid:scds:US:e7546c4e-edc6-45bb-8e3f-e298d59bb5d7#pageNum=1)
```cpp
class Solution {
public:
    bool isVowel(char c)
    {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
        return false;
    }
    long long countVowels(string word) {
        long long n=word.length();
        long long ans=0;
        vector<long long> dp(n,0);
        dp[0]=n;
        if(isVowel(word[0])) ans += n;
        for(long long i=1;i<n;i++)
        {
            dp[i] = dp[i-1] + n-i-i;
            if(isVowel(word[i])) ans += dp[i];
        }
        return ans;
    }
};
```

```
how many times each element in every substring
A1,A2,A3,A4,A5
how many times A1 appear in all substrings ? -> n=5
how many times A2 appear in all substrings ? ->  8
how many times A3 appear in  all substrings ?-> 9
how many times A4 appear in all substrings ? -> 8
how many times A5 appear in all substrings ? ->n=5;
...................

// formula dp[i]=dp[i-1]+n-i-i
"0" based indexing
https://acrobat.adobe.com/link/track?uri=urn:aaid:scds:US:e7546c4e-edc6-45bb-8e3f-e298d59bb5d7
```
