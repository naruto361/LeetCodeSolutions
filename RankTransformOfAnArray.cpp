class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]=i;
        }
        int rank=1;
        for(auto i:m)
        {
            arr[i.second]=rank++;
        }
        return arr;
    }
};
