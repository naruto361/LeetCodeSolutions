class Solution {
public:
    vector<vector<int>> v1,v2,v3,v4;
    void solve(int n)
    {
        // Left to Right
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<n;j++)
            {
                if(v1[i][j]==0)
                {
                    sum=0;continue;
                }
                sum++;
                v1[i][j]=sum;
            }
        }
        
        // Right to Left
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=n-1;j>=0;j--)
            {
                if(v2[i][j]==0)
                {
                    sum=0;continue;
                }
                sum++;
                v2[i][j]=sum;
            }
        }
        
        // Top to Down
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<n;j++)
            {
                if(v3[j][i]==0)
                {
                    sum=0;continue;
                }
                sum++;
                v3[j][i]=sum;
            }
        }
        
        // Down to Top
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=n-1;j>=0;j--)
            {
                if(v4[j][i]==0)
                {
                    sum=0;continue;
                }
                sum++;
                v4[j][i]=sum;
            }
        }
    }
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        vector<vector<int>> v(n,vector<int> (n,1));
        for(auto &i:mines)
        {
            v[i[0]][i[1]]=0;
        }
        int maxi=0;
        
        v1=v;v2=v;v3=v;v4=v;
        solve(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                maxi=max(maxi,
                    min({v1[i][j],v2[i][j],
                    v3[i][j],v4[i][j]}));
            }
        }
        return maxi;
    }
};
