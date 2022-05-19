[Remove Duplicate Letters](https://leetcode.com/problems/remove-duplicate-letters/)

[Smallest Subsequence of Distinct Characters](https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/)
```
         [TechDose Video Link](https://www.youtube.com/watch?v=j313ttNJjo0)
         example - "bcab"
         1. monotonic stack
         2. freq array
         3. vector
```

```cpp
class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> freq(26,0);
        for(char &c:s) freq[c-'a']++;
        stack<char> st;
        vector<bool> seen(26,false);
        for(char &c:s)
        {
            if(seen[c-'a']) 
            {
                freq[c-'a']--;
                continue;
            }
            while(!st.empty() && c<st.top() && freq[st.top()-'a']>0)
            {
                seen[st.top()-'a']=false;
                st.pop();
            }
            st.push(c);
            freq[c-'a']--;
            seen[c-'a']=true;
        }
        string ans;
        while(!st.empty()) {ans +=st.top();st.pop();}
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
```
