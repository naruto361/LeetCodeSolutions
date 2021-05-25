int largestSubmatrix(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {   if(i==0) continue;
                if(matrix[i][j])
                {
                    matrix[i][j]+=matrix[i-1][j];
                }
            }
            vector<int> v=matrix[i];
            sort(v.begin(),v.end());
            for(int j = 0; j < n; ++j)
                ans = max(ans, v[j] * (n - j));
        }
        return ans;
    }
