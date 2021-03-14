class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=2;i--)
        {
            int j=0,k=i-1;
            while(j<k)
            {
                if(nums[j]+nums[k]>nums[i])
                {
                    k--;
                    ans+=k-j+1;
                    
                }
                else j++;
            }
        }
        return ans;
    }
};
