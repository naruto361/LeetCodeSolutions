class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> a,b,ans;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]&1) b.push_back(A[i]);
            else a.push_back(A[i]);
        }
        int x=0,y=0;
        for(int i=0;i<A.size();i++)
        {
            if(i%2==0) {ans.push_back(a[x]);x++;}
            else {ans.push_back(b[y]);y++;}
        }
        return ans;
    }
};
