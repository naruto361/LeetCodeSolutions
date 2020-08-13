class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        vector< int> k(3);
        k[0]= nums[0]*nums[1]*nums[2];
        k[1]=nums[0]*nums[1]*nums[nums.size()-1];
        k[2]=nums[0]*nums[nums.size()-1]*nums[nums.size()-2];
        return *max_element(k.begin(),k.end());
    }
};
