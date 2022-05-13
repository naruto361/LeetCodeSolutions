```cpp
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        // BUCKET SORT , RADIX SORT
        //https://leetcode.com/problems/maximum-gap/discuss/50644/Pigeon-hole-principle
        if(nums.size()<2) return 0;
        if(nums.size()==2) return abs(nums[0]-nums[1]);
        int n=nums.size();
        int maxElement=*max_element(nums.begin(),nums.end());
        int minElement=*min_element(nums.begin(),nums.end());
        if(minElement == maxElement) return 0;
        double l=double(maxElement-minElement)/double(n-1);
        // PIGEON HOLE PRINCIPLE
        // each index can have atmost 2 elements
        vector<int> mini(n+1,INT_MAX) , maxi(n+1,INT_MIN);
        for(int i=0;i<n;i++)
        {
            //cout<<nums[i]<<" "<<miniElement<<'\n';
            int idx=(nums[i]-minElement)/l;
            mini[idx]=min(mini[idx],nums[i]);
            maxi[idx]=max(maxi[idx],nums[i]);
            //cout<<i<<" "<<idx<<" "<<mini[idx]<<" "<<maxi[idx]<<'\n';
        }
        int ans=0;
        int prev=maxi[0];
        for(int i=1;i<n;i++)
        {
            if(mini[i]==INT_MAX) continue;
            ans=max(ans,mini[i]-prev);
            prev=maxi[i];
        }
        return ans;
    }
};
```
