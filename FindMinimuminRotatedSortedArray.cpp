class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[0];
        //return *min_element(nums.begin(),nums.end());
    }
};
