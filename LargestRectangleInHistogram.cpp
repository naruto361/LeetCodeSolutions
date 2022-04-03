class Solution {
public:
        // ******************  leftsmall and rightsmall  ***************
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> leftsmall(n,-1),rightsmall(n,n);
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[i]<heights[st.top()])
            {
                rightsmall[st.top()]=i;
                st.pop();
            }
            if(!st.empty()) leftsmall[i]=st.top();
            //else leftsmall[i]=-1;
            st.push(i);
        }
        // for(int i=0;i<n;i++) cout<<leftsmall[i]<<" ";
        // cout<<'\n';
        // for(int i=0;i<n;i++) cout<<rightsmall[i]<<" ";
        // cout<<'\n';
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans = max(ans, (rightsmall[i]-leftsmall[i]-1)*heights[i] );  
        }
        return ans;
    } 
};
