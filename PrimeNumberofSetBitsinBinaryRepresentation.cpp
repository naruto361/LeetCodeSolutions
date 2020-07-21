class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int num=32;
        bool pno[num+1];
        
        memset(pno, true, sizeof(pno));
            pno[0]=pno[1]=0;
        for (int i = 2; i*i<= num; i++) 
        {
            if (pno[i] == true) 
            {
            for (int j = i*2; j<= num; j +=i)
            pno[j] = false;
            }
        }
        int ans=0;
        for(int i=L;i<=R;i++)
        {   int k=__builtin_popcount(i);
            if(pno[k]) ans++;
        }
        return ans;
    }
};
