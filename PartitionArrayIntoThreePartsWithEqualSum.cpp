class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int total=0;
        for(int i=0;i<A.size();i++) total+=A[i];
        if(total%3!=0)    return 0;
        int sum=0,parts=0;
        for (int i = 0; i < A.size(); i++) 
        {
            sum += A[i];
            if (sum == (parts + 1) * total / 3) parts++;
        }
        return parts >= 3;
    }
};
