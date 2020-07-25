class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>v;
        if(s.length()==1) return 1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a'&& s[i]<='z')
                v.push_back(s[i]);
            else if(s[i]>='A'&& s[i]<='Z')
                v.push_back(char(s[i]+32));
            else if(s[i]>='0'&& s[i]<='9') v.push_back(s[i]);
        }
        for(int i=0;i<v.size()/2;i++)
        {
            if(v[i]!=v[v.size()-i-1]) return 0;      
        }
        return 1;
    }
};
