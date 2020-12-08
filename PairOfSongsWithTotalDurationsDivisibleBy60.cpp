class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int m[60]={0};
        int res = 0;
        for (auto i : time) {
            if (i % 60 == 0)
                res += m[0];
            else
                res += m[60 - i%60];
            m[i%60]++;
        }
        return res;
    }
};
