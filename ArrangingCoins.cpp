class Solution {
public:
    int arrangeCoins(int n) {
        
        if(n<=2) return 1;
        int l=1,h=65535;
        while(l<h)
        {
            long long mid = h- (h-l)/2;
            long long k =(mid * (mid+1))/2;
            if(k <= n)
            {
                l=mid;
                
            }
            else h=mid-1;
            
        }
        return l;
        
    }
};
