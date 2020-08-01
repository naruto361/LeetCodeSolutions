class Solution {
public:
    int binaryGap(int n) {
        int b[32]; 
        int i = 0; 
        while (n > 0) 
        { 
            b[i] = n % 2; 
            n = n / 2; 
            i++; 
        } 
        vector<int> v;
        for(int j=0;j<=i-1;j++)
        {
            if(b[j]==1) v.push_back(j);
        }
        int k=0;
        if(v.size()==1) return 0;
        for(int i=1;i<v.size();i++)
        {
            k=max(v[i]-v[i-1] ,k);
        }
        return k;
    }
};
