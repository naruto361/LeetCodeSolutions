class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,int> mp;
        for(int i=0;i<paths.size();i++)
        {
            mp[paths[i][0]]++;
            mp[paths[i][1]]++;
        }
        string s[2];
        int k=0;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if( i->second == 1) s[k++]=i->first;
        }
        for(int i=0;i<paths.size();i++)
        {
            if(paths[i][1]==s[0] || paths[i][1]==s[1])
                return paths[i][1];
        }
        return "0";
    }
};
