class Solution {
public:
    string removeDuplicates(string s) {
        stack<pair<char,int>> st;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty()) st.push({s[i],1});
            else 
            {
                if(s[i]==st.top().first) 
                {
                    st.top().second++;
                    if(st.top().second==2) st.pop();
                }
                else st.push({s[i],1});
            }
        }
        string ans;
        while(!st.empty())
        {
            int k=st.top().second;
            while(k--)
            {
                ans+=st.top().first;
            }
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
