class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        int l=nums.size();
        vector<int> a(l,0),b(l,0);
        bool check=0;
        for(int i=0;i<l-1;i++)
        {
            if(i==0) a[i]=nums[0];
            else if(i==1) a[i]=max(nums[0],nums[1]);
            else
            {
                a[i]=max(a[i-1],a[i-2]+nums[i]);
            }
        }
        for(int i=1;i<l;i++)
        {
            if(i==1) b[i]=nums[i];
            else if(i==2) b[i]=max(nums[i],nums[i-1]);
            else
            {
                b[i]=max(b[i-1],b[i-2]+nums[i]);
            }
        }
        return max(a[l-2],b[l-1]);
    }
};
