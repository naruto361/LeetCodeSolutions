vector<string> letterCasePermutation(string S) {
        vector<string> v;
        unordered_set<string> c;
        for(int i=0;i<1<<S.length();i++)
        {
            string s;
            for(int j=0;j<S.length();j++)
            {   
                    \\ if digit add to string as it is
                if(S[j]>='0' && S[j]<='9') s+=S[j];
                else
                {
                        \\ if bit is 1 add uppercase of the character
                        \\   else lowercase of the character
                    if(i>>j & 1) s+=toupper(S[j]);
                    else s+=tolower(S[j]);
                }
            }
            c.insert(s);
        }
        for(auto i:c) v.push_back(i);
        return v;
    }
