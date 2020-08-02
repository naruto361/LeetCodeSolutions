class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int f[10000+1]={0};
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            f[nums[i]]++;
        }
        v.push_back(0);v.push_back(0);
        for(int i=1;i<=nums.size();i++)
        {   if(f[i]==2) v[0]=i;
            if(f[i]==0) v[1]=i;
            if(v[0]!=0 && v[1]!=0) break;
        }
        return v;
    }
};
