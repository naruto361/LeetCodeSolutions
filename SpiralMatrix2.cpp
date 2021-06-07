vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
        int x=1;
        int top=0,bottom=n-1,left=0,right=n-1;
        int d=0;
        while(top<=bottom && left<=right)
        {
            
            if(d==0)
            {
                for(int i=left;i<=right;i++)
                {
                    ans[top][i]=x++;
                }
                top++;
            }
            else if(d==1)
            {
                for(int i=top;i<=bottom;i++)
                {
                    ans[i][right]=x++;
                }
                right--;
            }
            else if(d==2)
            {
                for(int i=right;i>=left;i--)
                {
                    ans[bottom][i]=x++;
                }
                bottom--;
            }
            else
            {
                for(int i=bottom;i>=top;i--)
                {
                    ans[i][left]=x++;
                }
                left++;
            }
            d++;
            d=d%4;
        }
        return ans;
    }
