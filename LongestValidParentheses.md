## [Longest Valid Parentheses](https://leetcode.com/problems/longest-valid-parentheses/)
```cpp
int longestValidParentheses(string s) {
        if(s.length()<2) return 0;
        int ans=0;
        stack<int> st;
        st.push(-1);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(') 
                st.push(i);
            else 
            {
                st.pop();
                if(st.empty()) st.push(i);
                else ans=max(ans,i-st.top() );
            }
        }
        return ans;
    }
```
