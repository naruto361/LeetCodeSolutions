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
