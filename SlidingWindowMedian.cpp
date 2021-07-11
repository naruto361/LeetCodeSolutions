class Solution {
public:
    double median(multiset<int> &s,int k)
    {
        double ff= *(next( s.begin(), k/2 -1 ));
        double ss= *(next( s.begin(), k/2 ));
        if(k&1)
        {
            return ss;
        }
        return (ff+ss)/2.0;
    }
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        multiset<int> s;
        vector<double> ans;
        for(int i=0;i<k;i++) s.insert(nums[i]);
        ans.push_back(median(s,k));
        for(int i=k;i<nums.size();i++)
        {
            s.insert(nums[i]);
            s.erase(s.find(nums[i-k]));
            ans.push_back(median(s,k));
        }
        return ans;
    }
};
