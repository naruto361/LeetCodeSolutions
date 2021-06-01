int largestRectangleArea(vector<int>& heights) {
        int ans=0;
        int i=0;
        stack<int> st;
        while(i<heights.size())
        {
            if(st.empty() || heights[i]>heights[st.top()])
            {
                st.push(i++);
                cout<<"push : "<<heights[i-1]<<endl;
            }
            else
            {
                int j=st.top();
                st.pop();
                cout<<"pop : "<<heights[j]<<" "; 
                int a=heights[j];
                if(!st.empty()) a*=(i-st.top()-1),cout<<a<<"*"<<"("<<i<<"-"<<st.top()<<"-"<<1<<") ";
                else cout<<a<<"*"<<i<<" ",a*=i;
                cout<<"area : "<<a<<endl;
                if(a>ans) ans=a;
            }
        }
        while(!st.empty())
        {
            int j=st.top();
                st.pop();
                int a=heights[j];
                if(!st.empty()) a*=(i-st.top()-1),cout<<a<<"*"<<"("<<i<<"-"<<st.top()<<"-"<<1<<") ";
                else cout<<a<<"*"<<i<<" ",a*=i;
                cout<<"area : "<<a<<endl;
                if(a>ans) ans=a;
        }
        return ans;
    }
