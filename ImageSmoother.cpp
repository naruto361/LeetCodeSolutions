class Solution {
public:
    int dx[8]={1,1,1,0,0,-1,-1,-1};
    int dy[8]={-1,0,1,-1,1,-1,0,1};
    bool valid(int i,int j,vector<vector<int>>& img)
    {
        if(i<0 || j<0 || i>=img.size() || j>=img[0].size()) return 0;
        return 1;
    }
    int solve(int x,int y,vector<vector<int>>& img)
    {
        int s=1;
        int ans=img[x][y];
        for(int i=0;i<8;i++)
        {
            if(valid(x+dx[i],y+dy[i],img))
            {
                s++;
                ans+=img[x+dx[i]][y+dy[i]];
            }
        }
        return ans/s;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> v(img.size(),vector<int> (img[0].size(),0));
        for(int i=0;i<img.size();i++)
        {
            for(int j=0;j<img[i].size();j++)
            {
                v[i][j]=solve(i,j,img);
            }
        }
        return v;
    }
};
