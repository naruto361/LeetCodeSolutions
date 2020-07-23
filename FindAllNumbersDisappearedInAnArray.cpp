class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int l=nums.size();
        vector<int>ans;
        int f[100000+1]={0};
        for(int i=0;i<l;i++)
            f[nums[i]]++;
        for(int i=1;i<=l;i++)
            if(f[i]==0) ans.push_back(i);
        return ans;
    }
};
