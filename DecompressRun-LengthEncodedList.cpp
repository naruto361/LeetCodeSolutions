class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v;
        for(int i=1;i<nums.size();i+=2)
        {
            int k=nums[i-1];
            while(k--) v.push_back(nums[i]);
        }
        return v;
    }
};
