```cpp
class Solution {
public:
    int ans;
    void solve(string s,vector<string>& arr,int idx)
    {
        if(repeat(s)) return ;
        ans=max(ans,(int)s.length());
        for(int i=idx;i<arr.size();i++)
        {
            solve(s+arr[i],arr,i+1);
        }
    }
    bool repeat(string &word)
    {
        set<char> st;
        for(char &c:word)
        {
            if(st.find(c)!=st.end()) return true;
            else  st.insert(c);
        }
        return false;
    }
    int maxLength(vector<string>& arr) {
        solve("",arr,0);
        return ans;
    }
};
```
