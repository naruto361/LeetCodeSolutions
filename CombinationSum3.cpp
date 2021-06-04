void check(vector<vector<int>> &ans,vector<int> &inter,int k,int n,int idx)
    {
        if(k==0 && n==0)
        {
            ans.push_back(inter);return ;
        }
        for(int i=idx;i<=n && i<10 ;i++)
        {
            inter.push_back(i);
            check(ans,inter,k-1,n-i,i+1);
            inter.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> inter;
        check(ans,inter,k,n,1);
        return ans;
    }
