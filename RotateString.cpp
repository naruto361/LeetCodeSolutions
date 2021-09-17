class Solution {
public:
    bool rotateString(string s, string goal) {
        if(goal.length()!=s.length()) return false;
        s+=s;
        return s.find(goal)!=string::npos;
    }
};
