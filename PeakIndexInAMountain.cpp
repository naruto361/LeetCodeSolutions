class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int maxi=*max_element(A.begin(),A.end());
        for(int i=0;i<A.size();i++)
            if(A[i]==maxi) return i;
        return 0;
    }
};
