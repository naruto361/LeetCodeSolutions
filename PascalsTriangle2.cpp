vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        for(int i=0;i<numRows;i++)
        {
            if(i==0)
            {
                v.push_back({1});
            }
            else if(i==1)
            {
                v.push_back({1,1});
            }
            else
            {
                vector<int> t;
                t.push_back(1);
                for(int j=1;j<i;j++)
                {
                    t.push_back(v[i-1][j-1]+v[i-1][j]);
                    
                }
                t.push_back(1);
                v.push_back(t);
                t.clear();
            }
        }
        return v;
    }
