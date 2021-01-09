class Solution {
public:
    vector<vector<int>> ans;
    void change(int k,int n,int index,vector<int> v)
    {
        if(k==0) ans.push_back(v);
        else
        {
            for(int i=index+1;i<=n;i++)
            {
                v.push_back(i);
                change(k-1,n,i,v);
                v.pop_back();
            }
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> v;
        change(k,n,0,v);
        return ans;
    }
};
