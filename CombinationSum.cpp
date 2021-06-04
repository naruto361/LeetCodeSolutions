void check(vector<vector<int>> &ans,vector<int> &inter,vector<int> &candidates,int target,int idx)
    {
        if(target<0) return;
        if(target==0)
        {
            ans.push_back(inter);return;
        }
        for(int i=idx;i<candidates.size() && candidates[i]<=target;i++)
        {
            inter.push_back(candidates[i]);
            check(ans,inter,candidates,target-candidates[i],i);
            inter.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> inter;
        sort(candidates.begin(),candidates.end());
        check(ans,inter,candidates,target,0);
        return ans;
    }
