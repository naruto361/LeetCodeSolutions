class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mini=INT_MAX;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1] <mini) mini=arr[i]-arr[i-1];
        }
        vector<vector<int>> v;
        for(int i=1;i<arr.size();i++)
        {   vector<int> p;
            if(arr[i]-arr[i-1] == mini) 
            {
                p.push_back(arr[i-1]);
                p.push_back(arr[i]);
                v.push_back(p);
            }
            p.clear();
        }
        return v;
    }
};
