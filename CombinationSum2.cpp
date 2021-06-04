void check(vector<vector<int>> &ans,vector<int> &inter,vector<int> &candidates,int target,int idx)
    {
        if(target<0) return;
        if(target==0)
        {
            ans.push_back(inter);return;
        }
        for(int i=idx;i<candidates.size() && candidates[i]<=target;i++)
        {
            if(i>idx && candidates[i]==candidates[i-1]) continue;
            inter.push_back(candidates[i]);
            check(ans,inter,candidates,target-candidates[i],i+1);
            inter.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> inter;
        sort(candidates.begin(),candidates.end());
        check(ans,inter,candidates,target,0);
        return ans;
    }
