class Solution {
public:
    int scoreOfParentheses(string S) {
        int ans=0;
        stack<int> st;
        for(auto c:S)
        {
            if(c=='(')
            {
                st.push(ans);
                ans=0;
            }
            else
            {
                ans=st.top()+max(2*ans,1);
                st.pop();
            }
        }
        return ans;
    }
};
