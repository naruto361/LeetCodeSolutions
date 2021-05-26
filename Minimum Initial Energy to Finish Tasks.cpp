bool sortbysec(const vector<int> &a,const vector<int> &b)
{
    return (a[1]-a[0])>(b[1]-b[0]);
}
class Solution {
public:
    bool ok(vector<vector<int>> &v,int mid)
    {
        for(int i=0;i<v.size();i++)
        {
            if(mid>=v[i][1]) mid-=v[i][0];
            else return 0;
            
        }
        return mid>=0;
    }
    int minimumEffort(vector<vector<int>>& tasks) {
        
        sort(tasks.begin(),tasks.end(),sortbysec);
        int l=1,h=INT_MAX,mid;
        while(l<h)
        {
            mid=l+(h-l)/2;
            if(ok(tasks,mid))
            {
                h=mid;
            }
            else l=mid+1;
        }
        return l;
    }
};
