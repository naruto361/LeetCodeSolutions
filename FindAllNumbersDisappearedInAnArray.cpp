vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        vector<int> f(n+1,0);
        for(int &i:nums) f[i]=1;
        for(int i=1;i<=n;i++) if(f[i]==0) ans.push_back(i);
        return ans;
    }
