class Solution {
public:
    int ans=0;
    unordered_set<string> c;
    void change(string s,int index)
    {
        if(c.size()>ans) ans= c.size(); 
        if(index>=s.length()) return;
        string str="";
        for(int i=index;i<s.length();i++)
        {
            str+=s[i];
            if(c.find(str)==c.end())
            {
                c.insert(str);
                change(s,i+1);
                c.erase(str);
            }
        }
    }
    int maxUniqueSplit(string s) {
        change(s,0);
        return ans;
    }
};
