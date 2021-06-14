bool sortbyg(pair<int,int> &a , pair<int,int> &b)
{
    if(a.first==b.first)
    {
        return a.second>b.second;
    }
    return a.first>b.first;
}
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<pair<int,int>> v;
        for(auto i:boxTypes)
        {
            v.push_back({i[1],i[0]});
        }
        int ans=0;
        sort(v.begin(),v.end(),sortbyg);
        for(auto i:v)
        {
            if(i.second<=truckSize)
            {
                ans+=i.second*i.first;
                truckSize-=i.second;
            }
            else
            {
                ans+=i.first*truckSize;
                return ans;
            }
        }
        return ans;
    }
};
