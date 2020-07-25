class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]);
        vector<int>v;
        for(auto itr=s.begin();itr!=s.end();itr++)
            v.push_back(*itr);
        if(v.size()<3)
            return v[v.size()-1];
        return v[v.size()-3];
    }
};
