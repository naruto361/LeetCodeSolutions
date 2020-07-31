class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int f[26]={0};
        for(int i=0;i<text.length();i++)
            f[text[i]-'a']++;
        vector<int> v;
        v.push_back(f[0]);
        v.push_back(f[1]);
        v.push_back(f[11]/2);
        v.push_back(f[14]/2);
        v.push_back(f[13]);
        return *min_element(v.begin(),v.end());
        
    }
};
