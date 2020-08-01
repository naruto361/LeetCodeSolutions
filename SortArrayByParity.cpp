class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int>even;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2==0) even.push_back(A[i]);
        }
        for(int i=0;i<A.size();i++)
        {
            if(A[i]&1) even.push_back(A[i]);
        }
        return even;
    }
};
