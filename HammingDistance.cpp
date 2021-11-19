class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans =0;
        int k=x^y;
        while(k>0)
        {
            if(k%2==1) ans++;
            k/=2;
        }
        return ans;
    }
};
