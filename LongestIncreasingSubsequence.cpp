class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()==1) return 1;
        vector<int> ans(nums.size(),1);
        int idx=0;
        int maxi=1;
        for(int i=1;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    ans[i]=max(ans[i],1+ans[j]);
                }
            }
            if(ans[i]>maxi)
            {
                idx=i;
                maxi=ans[i];
            }
        }
        cout<<nums[idx]<<" ";;
        int j=idx;
        for(int i=idx-1;i>=0;i--)
        {
            if(ans[i]+1==ans[j]) 
            {
                cout<<nums[i]<<" ";
                j=i;
            }
        }
        return maxi;
    }
};
/********************************* METHOD 2 *************************/
int lengthOfLIS(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            auto k=lower_bound(ans.begin(),ans.end(),nums[i]);
            if(k==ans.end()) ans.push_back(nums[i]);
            else *k=nums[i];
        }
        return ans.size();
    }
