class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> v;
        int k=0;
        int n=S.length();
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='I')
            {
                v.push_back(k);k++;
            }
            else
            {
                v.push_back(n);n--;
            }
        }
        v.push_back(k);
        return v;
    }
};
