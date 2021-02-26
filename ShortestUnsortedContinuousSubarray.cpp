class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> v=nums;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,j=n-1;
        while(i<n && nums[i]==v[i]) i++;
        while(j>i && nums[j]==v[j]) j--;
        return j-i+1;
    }
};
