## [Longest Nice Substring](https://leetcode.com/problems/longest-nice-substring/)
```cpp
string longestNiceSubstring(string s) {
        if(s.length()==1) return "";
        string ans;
        for(int i=0;i<s.length();i++)
        {
            string t;
            for(int j=i;j<s.length();j++)
            {
                t+=s[j];
                int flag=0;
                for(auto c:t)
                {
                    if(c>='a' && c<='z')
                    {
                        if(t.find(toupper(c))==string::npos)
                        {
                            flag=1;break;
                        }
                    }
                    else
                    {
                        if(t.find(tolower(c))==string::npos)
                        {
                            flag=1;break;
                        }
                    }
                }
                if(flag==0)
                {
                    if(t.size()>ans.size()) ans=t;
                }
            }
        }
            return ans;
    }
```
