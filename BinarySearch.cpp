class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1)
        {
            if(nums[0]==target) return 0;
            else return -1;
        }
        int l=0,r=nums.size();
            while(l<=r)
            {
                int mid=r+(l-r)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) r=mid-1;
                else l=mid+1;
            }
        return -1;
    }
};
