class Solution {
public:
    bool isPerfectSquare(int num) {
        long double sr = sqrt(num); 
        return ((sr - floor(sr)) == 0);
                
    }
};
