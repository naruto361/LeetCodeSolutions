class Solution {
public:
    int countOdds(int low, int high) {
        if(low==high)
        { 
            if(low&1) return 1;
            return 0;
        }
        int a=0;
        if(low&1) a++;
        if(high&1) a++;
        if(a>0)
        a+=(high-1-low)/2;
        else a+=(high-low)/2;
        return a;
    }
};
