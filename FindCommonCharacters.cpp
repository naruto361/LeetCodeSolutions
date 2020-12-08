class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        
        const int k=A.size();
        int f[k][26];
        memset( f, 0, k*26*sizeof(int) );
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<A[i].length();j++)
            {
                f[i][A[i][j]-'a']++;
            }
        }
        vector<string> v;
        
        for(int i=0;i<26;i++)
        {   int mini=INT_MAX;
            for(int j=0;j<k;j++)
            {
                mini=min(mini,f[j][i]);
            }
            if(mini!=0)
            {
                while(mini>0)
                    {string s="";s+=char('a'+i);v.push_back(s);mini--;}
            }
        }
        return v;
    }
};
