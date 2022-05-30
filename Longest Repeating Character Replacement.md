```cpp
class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0;
        for(char c='A';c<='Z';c++)
        {
            int maxi=0;
            int notsame=0;
            int l=0;
            for(int r=0;r<s.length();r++)
            {
                if(s[r]!=c) notsame++;
                while(notsame>k)
                {
                    if(s[l]!=c) notsame--;
                    l++;
                }
                maxi=max(maxi,r-l+1);
            }
            ans=max(ans,maxi);
        }
        return ans;
    }
};
```
