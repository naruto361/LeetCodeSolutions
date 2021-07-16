class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<4) return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size()-3;i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size()-2;j++)
            {
                if(j>i+1 && nums[j]==nums[j-1] ) continue;
                int l=j+1,r=nums.size()-1;
                while(l<r)
                {
                    if(nums[i]+nums[j]+nums[l]+nums[r]==target)
                    {
                        cout<<i<<" "<<j<<" "<<l<<" "<<r<<"\n";
                        ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                        while(nums[l]==nums[l+1])
                        {
                            l++;
                            if(l==nums.size()-1) break;
                        }
                        while(nums[r]==nums[r-1])
                        {
                            r--;
                            if(r==0) break;
                        }
                        l++;r--;
                    }
                    else if(nums[i]+nums[j]+nums[l]+nums[r]<target)
                    {
                        while(nums[l]==nums[l+1])
                        {
                            l++;
                            if(l==nums.size()-1) break;
                        }
                        l++;
                    }
                    else
                    {
                        while(nums[r]==nums[r-1])
                        {
                            r--;
                            if(r==0) break;
                        }
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};
