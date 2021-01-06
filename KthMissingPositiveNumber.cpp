class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int f[2001]={0};
        for(int i=0;i<arr.size();i++)
        {
            f[arr[i]]++;
        }
        int x=0;
        for(int i=1;i<=2000;i++)
        {
            if(f[i]==0) x++;
            if(x==k) return i;
        }
        return -1;
    }
};
