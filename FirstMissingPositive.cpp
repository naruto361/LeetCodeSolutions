class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.size()==0)
            return 1;
        if(nums.size()==1)
        {
            if(nums[0]!=1) return 1;
        }
        set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0) s.insert(nums[i]);
        }
        int i=1;
        for(auto j=s.begin();j!=s.end();j++)
        {
            if(*j != i) return i;
            i++;
        }
        return i;
    }
};
