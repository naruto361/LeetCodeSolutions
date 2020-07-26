class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        vector<int>ans;
        if(a.size()==0) return ans;
        
        int m=a.size();
        int n=a[0].size();
        int d=0;
        int top=0,bottom=m-1,left=0,right=n-1;
        while(top<=bottom && left<=right)
        {
            if(d==0)
            {
                for(int i=left;i<=right;i++)
                {
                    ans.push_back(a[top][i]);
                }
                top++;
            }
            else if(d==1)
            {
                for(int i=top;i<=bottom;i++)
                {
                    ans.push_back(a[i][right]);
                }
                right--;
            }
            else if(d==2)
            {
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(a[bottom][i]);
                }
                bottom--;
            }
            else if(d==3)
            {
                for(int i=bottom;i>=top;i--)
                {
                    ans.push_back(a[i][left]);
                }
                left++;
            }
            d++;
            d%=4;
        }
    return ans;
    }
};
