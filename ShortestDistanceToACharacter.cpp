class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==c) v.push_back(i);
        }
        vector<int> res;
        int ptr=0;
        for(int i=0;i<s.length();i++)
        {
            int ans=INT_MAX;
            ans=min(ans,abs(i-v[ptr]));
            if(ptr>0)
            {
                ans=min(ans,abs(i-v[ptr-1]));
            }
            if(i==v[ptr]) ++ptr;
            ptr=min((int)v.size()-1,ptr);
            res.push_back(ans);
        }
        return res;
    }
};
