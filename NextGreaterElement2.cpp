vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n=nums.size();
        vector<int> v(n,-1);
        for(int i=0;i<2*n;i++)
        {
            while(!st.empty() && nums[i%n]>nums[st.top()] )
            {
                v[st.top()]=nums[i%n];
                st.pop();
            }
            st.push(i%n);
        }
        return v;
    }
