class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int maxi=0;
        unordered_map<int,int> mp;
        for(int &i:nums)
        {
            mp[i]++;
            if(i>maxi) maxi=i;
        }
        vector<int> ans(maxi+1,0);
        ans[0]=mp[0];
        ans[1]=mp[1];
        for(int i=2;i<=maxi;i++)
        {
            ans[i]=max(ans[i-1] , ans[i-2] + mp[i]*i);
        }
        return ans[maxi];
    }
};
