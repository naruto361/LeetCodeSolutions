class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        //string ans="";
        vector<pair<int,string>> v;
        for(int i=0;i<d.size();i++)
        {
            int k=0;
            int l=0;
            for(int j=0;j<s.length();j++)
            {
                if(s[j]==d[i][k]) {l++;k++;}
            }
            if(l==d[i].length()) v.push_back({l,d[i]});
        }
        vector<string> ans;
        int h=0;
        for(auto i=v.begin();i!=v.end();i++)
        {
            if(i->first >h)
            {
                h=i->first;
            }
        }
        for(auto i=v.begin();i!=v.end();i++)
        {
            if(i->first ==h)
            {
                ans.push_back(i->second);
            }
        }
        sort(ans.begin(),ans.end());
        if(ans.size()==0) return "";
        return ans[0];
    }
};
