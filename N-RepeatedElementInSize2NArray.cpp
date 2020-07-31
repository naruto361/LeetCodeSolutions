class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int f[10000]={0};
        int n=A.size()/2;
        for(int i=0;i<A.size();i++)
        {
            f[A[i]]++;
            if(f[A[i]]==n) return A[i];
        }
        return 0;
    }
};
