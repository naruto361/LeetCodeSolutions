class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> c=heights;
        sort(c.begin(),c.end());
        int ans=0;
        for(int i=0;i<c.size();i++)
        {
            if(c[i]!=heights[i]) ans++;
        }
        return ans;
    }
};
