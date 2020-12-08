class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
       // v.reserve( nums1.size() > nums2.size() ? nums2.size() : nums1.size() );
        int a=0,b=0;
        while(a<nums1.size() && b<nums2.size())
        {
            if(nums1[a]==nums2[b])
            {
                v.push_back(nums1[a]);a++;b++;continue;
            }
            if(nums1[a]>nums2[b]) b++;
            else a++;
        }
        return v;
    }
};
