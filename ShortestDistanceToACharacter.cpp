class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>v,ans;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==c)     v.push_back(i);
        }
        int j=0;
        for(int i=0;i<s.length();i++)
        {   
            int mini=INT_MAX;
            for(int j=0;j<v.size();j++)
            {
                if(abs(v[j]-i)<mini) mini=abs(v[j]-i);
            }
            ans.push_back(mini);
        }
        return ans;
    }
};
