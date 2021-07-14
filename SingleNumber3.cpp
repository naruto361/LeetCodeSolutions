class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,bool> mp;
        for(auto &i:nums)
        {
            if(s.find(i)==s.end()) s.insert(i);
            else s.erase(i);
        }
        return {*s.begin(),*(++s.begin())};
    }
};
