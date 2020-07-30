class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int f[100000+1]={0};
        for(int i=0;i<n;i++)
            f[arr[i]]++;
        for(int i=1;i<=100000;i++)
            if(f[i]>n/4) return i;
        return 0;
    }
};
