class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int f[2001]={0};
        for(int i=0;i<arr.size();i++)
        {
            f[arr[i]+1000]++;
        }
        sort(f,f+2001);
        for(int i=1;i<2001;i++)
        {
            if(f[i]!=0)
            {
                if(f[i]==f[i-1]) return 0;
            }
        }
        return 1;
    }
};
