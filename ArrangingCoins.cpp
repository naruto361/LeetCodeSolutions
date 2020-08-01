class Solution {
public:
    int arrangeCoins(int n) {
        long long int i=1;
        while(1)
        {
            long long int k=((i)*(i+1))/2;
            if(k<n) i++;
            else if(k==n) return i;
            else break;
        }
        return i-1;
    }
};
