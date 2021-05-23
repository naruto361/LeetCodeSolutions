vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> dp(n,0);
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && temperatures[i]>temperatures[st.top()])
            {
                dp[st.top()]=i-st.top();
                    st.pop();
            }
            st.push(i);
        }
        return dp;
    }
