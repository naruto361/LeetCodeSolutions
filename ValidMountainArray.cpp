class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if(A.size()<=2) return 0;
        int ans=0;
        int maxi=*max_element(A.begin(),A.end());
        for(int i=0;i<A.size();i++)
            if(A[i]==maxi) ans++;
        if(ans!=1) return 0;
        int k=0,change=0;
        if(A[1]>A[0]) k=1;
        else k=-1;
        for(int i=1;i<A.size();i++)
        {
            if(A[i]==A[i-1]) return 0;
            if(k==1)
            {    
                if(A[i]<A[i-1]) {k=-1;change++;}
            }
            else if(k==-1)
            {
                if(A[i]>A[i-1]) {k=1;change++;}
            }
            if(change>1) return 0;
        }
        if(change==1)
        return 1;
        else return 0;
    }
};
