class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string str = s + s;
        return (str).substr(1, s.length()*2-2).find(s)!=-1;
    }
};
