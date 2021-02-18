class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=gain[0];
        int maxi=ans;
        for(int i=1;i<gain.size();i++)
        {
            ans+=gain[i];
            maxi=max(maxi,ans);
        }
        return maxi>0 ? maxi:0;
    }
};
