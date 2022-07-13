```cpp
class Solution {
public:
    bool validPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                int i1=i+1,j1=j,i2=i,j2=j-1;
                while(i1<j1)
                {
                    if(s[i1]!=s[j1]) break;
                    i1++;j1--;
                }
                while(i2<j2)
                {
                    if(s[i2]!=s[j2]) break;
                    i2++;j2--;
                }
                return (i1>=j1 || i2>=j2);
            }
            i++;j--;
        }
        return true;
    }
};
```

```cpp
class Solution {
public:
    bool palin(string &t)
    {
        int i=0,j=t.length()-1;
        while(i<j)
        {
            if(t[i] != t[j]) return false;
            i++;j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                string temp1=s , temp2=s;
                temp1.erase(i,1);
                temp2.erase(j,1);
                if( palin(temp1) || palin(temp2)) return true;
                return false;
            }
            i++;j--;
        }
        return true;
    }
};
