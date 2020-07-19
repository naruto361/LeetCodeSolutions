class Solution {
public:
    int countPrimes(int n) {
        bool primes[n+1];
        for(int i = 0 ; i < n ; i++) {
        primes[i] = true;
    }
    if(n<=1) return 0;
    primes[0] = false;
    primes[1] = false;

    for(int i = 2 ; i * i < n ; i++) {
        if(primes[i]) {
            for(int j = i ; i * j < n ; j++) {
                primes[j * i ] = false;
            }
        }   
    }

    int primeCounts = 0;
    for(int i = 2 ; i < n ; i++) {
        if(primes[i]) {
            primeCounts++;
        }
    }

    return primeCounts;
    }
};
