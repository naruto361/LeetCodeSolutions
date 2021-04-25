bool sortbysec(const vector<int> &a, 
              const vector<int> &b) 
{ 
    return (a[0] < b[0]); 
}
class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> v;
        sort(intervals.begin(),intervals.end(),sortbysec);
        v.push_back({intervals[0][0],intervals[0][1]});
        int f=intervals[0][0],s=intervals[0][1];
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
};
