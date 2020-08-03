class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=nums[nums.size()-1];
       for(int i=0;i<=k;i++)
       {
           if(i!=nums[i]) return i;
        }
       return k+1;
    }
};
