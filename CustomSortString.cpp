string ss;
    bool customsort(char &c1,char &c2)
    {
        return ss.find(c1)<ss.find(c2);
    }
class Solution {
public:
    string customSortString(string order, string str) {
        ss=order;
        sort(str.begin(),str.end(),customsort);
        return str;
    }
};
