class Solution {
public:
    int solve(vector<int> &arr)
    {
        stack<int> st;
        int n=arr.size();
        vector<int> leftsmall(n,-1),rightsmall(n,n);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[i]<arr[st.top()])
            {
                rightsmall[st.top()]=i;
                st.pop();
            }
            if(!st.empty()) leftsmall[i]=st.top();
            st.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans = max(ans , arr[i]*(rightsmall[i]-leftsmall[i]-1));
        }
        return ans;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int maxi=0;
        int m=matrix.size() , n=matrix[0].size();
        vector<int> temp(n,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]=='0') temp[j]=0;
                else temp[j]++;
            }
            maxi = max(maxi,solve(temp));
        }
        return maxi;
    }
};
