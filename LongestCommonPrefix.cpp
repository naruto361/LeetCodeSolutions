class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        if(strs.size()==1) return strs[0];
        string s1=strs[0] , s2=strs[strs.size()-1];
        int l=min(s1.length(),s2.length());
        int i=0;
        string ans;
        while(i<l)
        {
            if(s1[i]==s2[i])
            {
                ans += s1[i];
            }
            else return ans;
            i++;
        }
        return ans;
    }
};

*********************************************************************

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        string ans="";
        int mini=INT_MAX;
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i].length()<mini) mini=strs[i].length();
            
        }
        for(int i=0;i<mini;i++)
        {
            int f=1;
            char c=strs[0][i];
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]!=c) {return ans;}//f=0;break;}
            }
            if(f) ans+=strs[0][i];
        }
        return ans;
    }
};
