[Minimum Insertion Steps to Make a String Palindrome](https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/)
```cpp
class Solution {
public:
    int minInsertions(string s) {
        int n=s.length();
        vector<vector<int>> dp(n,vector<int> (n,0));
        int ans=1;
        for(int i=0;i<n;i++) {dp[i][i]=1;}
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1]) {dp[i][i+1]=2;ans=2;}
            else dp[i][i+1]=1;
        }
        for(int i=n-3;i>=0;i--)
        {
            for(int j=i+2;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    dp[i][j]=2+dp[i+1][j-1];
                    ans=max(ans,dp[i][j]);
                }
                else dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
            }
        }
        return n-ans;
    }
};
```
