class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        sort(A.begin(),A.end());
        return max(0,A[A.size()-1]-2*K-A[0]);
    }
};
