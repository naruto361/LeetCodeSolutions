class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int l=candyType.size()/2;
        unordered_set<int> s;
        for(auto i:candyType) s.insert(i);
        if(s.size()<=l) return s.size();
        return l;
    }
};
    }
};
