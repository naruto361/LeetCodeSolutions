class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> v;
        v.push_back(chars[0]);
        int ans=1;
        for(int i=1;i<chars.size();i++)
        {
            if(chars[i]==chars[i-1]) ans++;
            else
            {
                if(ans>1)
                {
                    string rev=to_string(ans);
                    for(int i=0;i<rev.length();i++)
                    { char c=rev[i];
                        v.push_back(c);
                    }
                }
                ans=1;
                v.push_back(chars[i]);
            }
            if(i==chars.size()-1 && chars[i]==chars[i-1]) {
                
                    string rev=to_string(ans);
                    for(int i=0;i<rev.length();i++)
                    {   char c=rev[i];
                        v.push_back(c);
                    }
            }
        }
        for(int i=0;i<v.size();i++) chars[i]=v[i];
        return v.size();
    }
};
