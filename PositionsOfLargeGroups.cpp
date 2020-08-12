class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> v;
        int ans=1,best=1;
        for(int i=1;i<S.size();i++)
        {
            vector<int> p;
            if(S[i]==S[i-1]) {ans++;
            best=max(best,ans);
            if(i==S.length()-1 && best>=3)
            {
                p.push_back(i-best+1),p.push_back(i);v.push_back(p);p.clear();
            }}
            else {
                if(best>=3) {p.push_back(i-best),p.push_back(i-1);v.push_back(p);p.clear();}
                ans=1;best=1;}
            
            
        }
        return v;
    }
};
