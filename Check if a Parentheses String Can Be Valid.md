[Check if a Parentheses String Can Be Valid](https://leetcode.com/problems/check-if-a-parentheses-string-can-be-valid/)

[Tutorial Video](https://www.youtube.com/watch?v=yKi8TIZcQoU)
```cpp
class Solution {
public:
    bool canBeValid(string s, string locked) {
        if(s.length()&1) return false;
        int cnt=0,bal=0;
        for(int i=0;i<s.length();i++)
        {
            if(locked[i]=='0') cnt++;
            else
            {
                if(s[i]=='(') ++bal;
                else --bal;
                if(bal==-1)
                {
                    if(cnt==0) return false;
                    bal=0;cnt--;
                }
            }
        }
         cnt=0,bal=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(locked[i]=='0') cnt++;
            else
            {
                if(s[i]==')') ++bal;
                else --bal;
                if(bal==-1)
                {
                    if(cnt==0) return false;
                    bal=0;cnt--;
                }
            }
        }
        return true;
    }
};
```
