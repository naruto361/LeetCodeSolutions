## METHOD 1
```cpp
class Solution {
private:
    int solve(string &s,int idx,vector<vector<bool>> &dp,vector<int> &res)
    {
        if(idx == s.length()) return 0;
        if(res[idx]!=-1) return res[idx];
        int mini=1e9;
        for(int i=idx;i<s.length();i++)
        {
            if(dp[idx][i])
            {
                mini=min(mini,1+solve(s,i+1,dp,res));
            }
        }
        return res[idx]=mini;
    }
public:
    int minCut(string s) {
        int n=s.length();
        
        vector<vector<bool>> dp(n,vector<bool> (n,false));
        for(int i=0;i<n;i++)
        {
            dp[i][i]=true;
        }
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1]) {dp[i][i+1]=true;}
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i+2;j<n;j++)
            {
                if(dp[i+1][j-1])
                {
                    if(s[i]==s[j]) {dp[i][j]=true;}
                }
            }
        }
        if(dp[0][n-1]) return 0;
        vector<int> res(n+1,-1);
        return solve(s,0,dp,res)-1;
    }
};
```
## METHOD 2
```cpp
class Solution {
public:
    bool isPalin(int l,int r,string &s)
    {
        while(l<r)
        {
            if(s[l] != s[r]) return false;
            l++;r--;
        }
        return true;
    }
    int solve(int i,int j,string &s,vector<vector<int>> &dp)
    {
        if(j<=i) return 0;
        if(dp[i][j] !=-1) return dp[i][j];
        if(isPalin(i,j,s)) return 0;
        int ans=INT_MAX;
        for(int k=i;k<=j;k++)
        {
            if(isPalin(i,k,s))
            {
                ans=min(ans,1+solve(k+1,j,s,dp));
            }
        }
        return dp[i][j]=ans;
    }
    int minCut(string s) {
        int n=s.length();
        vector<vector<int>> dp(n,vector<int> (n,-1));
        return solve(0,n-1,s,dp);
    }
};
```
