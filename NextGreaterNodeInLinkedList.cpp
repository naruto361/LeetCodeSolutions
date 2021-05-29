vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        ListNode* t=head;
        while(t)
        {
            v.push_back(t->val);
            t=t->next;
        }
        vector<int> ans(v.size(),0);
        stack<int> st;
        for(int i=0;i<v.size();i++)
        {
            while(!st.empty() && v[i]>v[st.top()])
            {
                ans[st.top()]=v[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
