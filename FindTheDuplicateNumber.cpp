class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=1;i<nums.size();i++)
            {
            if(nums[i]==nums[i-1]) return nums[i];
            }
        return 0;
    }
};
/******************** O(1) Extra Space *****************************/
int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];
        int en=nums[0];
        do
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
            //cout<<slow<<" "<<fast<<'\n';
        }while(slow!=fast);
        //cout<<"ok: "<<slow<<" "<<fast<<'\n';
        while(slow!=en)
        {
            slow=nums[slow];
            en=nums[en];
           // cout<<slow<<" "<<en<<'\n';
        }
        return slow;
    }
