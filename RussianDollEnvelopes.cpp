bool sortbyfunc(vector<int> &a,vector<int> &b)
{
    if(a[0]==b[0]) return a[1]>b[1];
    return a[0]<b[0];
}
class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
       int l=envelopes.size();
        sort(envelopes.begin(),envelopes.end(),sortbyfunc);
        vector<int> v;
        for(auto &i:envelopes)
        {
            if(v.size()==0)
            {
                v.push_back(i[1]);
            }
            else
            {
                auto it=lower_bound(v.begin(),v.end(),i[1]);
                if(it==v.end()) v.push_back(i[1]);
                else *it=i[1];
            }
        }
        return v.size();
            . 
        // int n=envelopes.size();
        // vector<int> dp(n,1);
        // int ans =1;
        // sort(envelopes.begin(),envelopes.end());
        // for(int i=1;i<n;i++)
        // {
        //     for(int j=0;j<i;j++)
        //     {
        //         if(envelopes[i][0]>envelopes[j][0] && envelopes[i][1]>envelopes[j][1])
        //         {
        //             dp[i]=max(dp[i],1+dp[j]);
        //             ans =max(ans,dp[i]);
        //         }
        //     }
        // }
        // return ans;
    }
};
