class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0, hi = int(nums.size()) - 1;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if ((nums[0] > target) ^ (nums[0] > nums[mid]) ^ (target > nums[mid]))
            lo = mid + 1;
        else
            hi = mid;
    }
    if(lo == hi && nums[lo] == target ) 
        return lo;
        else return -1;
    }
};
