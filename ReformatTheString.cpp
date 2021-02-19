class Solution {
public:
    string reformat(string s) {
        //vector<char> c;
        //vector<char> n;
        string c="";
        string n="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='0' && s[i]<='9') n+=s[i];//n.push_back(s[i]);
            else c+=s[i];//c.push_back(s[i]);
        }
        int l=min(n.size(),c.size());
        string ans="";
        if(l==0)
        {
            if(c.size()==1) ans+=c[0];
            if(n.size()==1) ans+=n[0];
        }
        if(n.size()>c.size())
        {
            for(int i=0;i<l;i++)
            {
                ans+=n[i];ans+=c[i];
            }
            if(l!=0)
            ans+=n[l];
        }
        else if(c.size()>n.size())
        {
            for(int i=0;i<l;i++)
            {
                ans+=c[i];ans+=n[i];
            }
            if(l!=0)
            ans+=c[l];
        }
        else
        {
            for(int i=0;i<l;i++)
            {
                ans+=c[i];ans+=n[i];
            }
        }
        return ans;
    }
};
