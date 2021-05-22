int largestRectangleArea(vector<int>& heights) {
        int ans=0;
        int i=0;
        stack<int> st;
        while(i<heights.size())
        {
            if(st.empty() || heights[i]>heights[st.top()])
            {
                st.push(i++);
            }
            else
            {
                int j=st.top();
                st.pop();
                int a=heights[j];
                if(!st.empty()) a*=(i-st.top()-1);
                else a*=i;
                if(a>ans) ans=a;
            }
        }
        while(!st.empty())
        {
            int j=st.top();
                st.pop();
                int a=heights[j];
                if(!st.empty()) a*=(i-st.top()-1);
                else a*=i;
                if(a>ans) ans=a;
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.size()==0) return 0;
        vector<int> heights(matrix[0].size(),0);
        int maxi=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]=='0') heights[j]=0;
                else heights[j]++;
            }
            maxi=max(maxi,largestRectangleArea(heights));
            //cout<<maxi<<" ";
        }
        return maxi;
        
    }
