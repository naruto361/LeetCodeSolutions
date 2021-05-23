vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if(intervals.size()==0) return {newInterval};
        int l=intervals.size();
        
        for(int i=0;i<intervals.size();i++)
        {
            if(newInterval[0]<intervals[i][0]) 
            {
                intervals.insert(intervals.begin()+i,{newInterval[0],newInterval[1]});
                break;
            }
            else if(newInterval[0]==intervals[i][0])
            {
                intervals[i][1]=max(newInterval[1],intervals[i][1]);
            }
        }
        if(newInterval[0]>intervals[l-1][0]) 
            intervals.insert(intervals.end(),{newInterval[0],newInterval[1]});
        
        vector<vector<int>> v;
        
        int f=intervals[0][0],s=intervals[0][1];
        v.push_back({f,s});
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=s && intervals[i][1]>s)
            {
                v[v.size()-1][1]=intervals[i][1];
                s=intervals[i][1];
            }
             else if(intervals[i][0]>s)
            {
                v.push_back({intervals[i][0],intervals[i][1]});
                f=intervals[i][0];
                s=intervals[i][1];
            }
        }
        return v;
    }
