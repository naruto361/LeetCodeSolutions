vector<int> getBiggestThree(vector<vector<int>>& grid) {
        set<int,greater<int>> s;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(i==0 || i==grid.size()-1) s.insert(grid[i][j]);
                else if(j==0 || j==grid[0].size()-1) s.insert(grid[i][j]);
                else
                {
                    int diff=1;
                    while(i-diff>=0 && i+diff<grid.size() && j+diff<grid[0].size() && j-diff>=0)
                    {
                        int ans=0;
                        ans=ans-grid[i-diff][j] -grid[i][j+diff] - grid[i+diff][j] -grid[i][j-diff];
                        for(int x=i-diff,y=j ;x<=i && y>=j-diff;x++,y-- ) ans+=grid[x][y]; 
                        for(int x=i-diff,y=j ;x<=i && y<=j+diff;x++,y++ ) ans+=grid[x][y];
                        for(int x=i,y=j-diff ;x<=i+diff && y<=j;x++,y++ ) ans+=grid[x][y];
                        for(int x=i,y=j+diff ;x<=i+diff && y>=j;x++,y-- ) ans+=grid[x][y];
                        diff++;
                        s.insert(ans);
                    }
                }
            }
        }
        vector<int> v;
        int j=0;
        for(auto i=s.begin();i!=s.end() && j<3;i++,j++) 
        {
            v.push_back(*i);
        }
        return v;
    }
