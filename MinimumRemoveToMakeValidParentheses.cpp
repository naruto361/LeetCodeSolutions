class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> st;
        vector<int> v;
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(') {st.push(s[i]); v.push_back(i);}
            else if(s[i]==')')
            {
                if(!st.empty()){
                    if(st.top()=='(')
                    {
                        st.pop();
                        v.pop_back();
                    }
                    else
                    {
                        v.push_back(i);
                    }
                }
                else {st.push(s[i]);v.push_back(i);}
            }
            
        }
        for(int i=0;i<s.length();i++)
        {
            
            if(find(v.begin(),v.end(),i)==v.end()) ans+=s[i];
        }
        return ans;
    }
};
