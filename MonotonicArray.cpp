class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        if(A.size()<=2) return 1;
        int k=0;
        for(int i=1;i<A.size();i++)
        {
            if(A[i]>A[i-1]) {k=1;break;}
            if(A[i]<A[i-1]) {k=-1;break;}
        }
        if(k==1)
        for(int i=2;i<A.size();i++)
        {
            if(A[i]<A[i-1]) return 0;
        }
        else
        {
            for(int i=2;i<A.size();i++)
        {
            if(A[i]>A[i-1]) return 0;
        }
        }
        return 1;
    }
};
