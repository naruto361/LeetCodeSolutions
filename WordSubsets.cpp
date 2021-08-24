class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int f[26]={0};
        for(int i=0;i<words2.size();i++)
        {
            int ff[26]={0};
            for(int j=0;j<words2[i].size();j++)
            {
                ff[words2[i][j]-'a']++;
                f[words2[i][j]-'a']=max(f[words2[i][j]-'a'],ff[words2[i][j]-'a']);
            }
        }
        vector<string> ans;
        for(int i=0;i<words1.size();i++)
        {
            int s[26]={0};
            for(int j=0;j<words1[i].size();j++)
            {
                s[words1[i][j]-'a']++;
            }
            bool ok=true;
            for(int j=0;j<26;j++)
            {
                if(s[j]<f[j])
                {
                    ok=false;break;
                }
            }
            if(ok) ans.push_back(words1[i]);
        }
        return ans;
    }
};
