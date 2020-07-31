class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;
        int f[101]={0};
        for(int i=0;i<nums.size();i++)
        {
            f[nums[i]]++;
        }
        for(int i=0;i<101;i++)
        {   if(f[i]>0)
            {
                int n=f[i]-1;
                n=((n)*(n+1))/2;
                ans+=n;
            }
        }
        return ans;
    }
};
