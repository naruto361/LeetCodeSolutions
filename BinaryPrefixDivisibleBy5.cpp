class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool> results;
        int num = 0;
        for(auto i : A)
        {
            num = ((num *2) + i)%10;
            results.push_back(num%5==0?true:false);
        }
        return results;
    }
};
