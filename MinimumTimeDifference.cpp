class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> vis;
        for(auto &s:timePoints)
        {
            int hr=(s[0]-'0')*10 + (s[1]-'0');
            int min=(s[3]-'0')*10 + s[4]-'0';
            vis.push_back(hr*60 + min);
        }
        sort(vis.begin(),vis.end());
        int l=vis.size();
        int mini=INT_MAX;
        for(int i=1;i<vis.size();i++)
        {
            mini=min(mini,vis[i]-vis[i-1]);
        }
        mini=min(mini,abs(1440-vis[l-1]+vis[0]));
        return mini;
    }
};
