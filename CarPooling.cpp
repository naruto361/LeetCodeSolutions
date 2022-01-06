class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> fill(1001,0);
        for(auto &i:trips)
        {
            fill[i[1]]+=i[0];
            fill[i[2]]-=i[0];
        }
        if(fill[0]>capacity) return false;
        for(int i=1;i<=1000;i++)
        {
            fill[i] += fill[i-1];
            if(fill[i] > capacity) return false;
        }
        return true;
    }
};
