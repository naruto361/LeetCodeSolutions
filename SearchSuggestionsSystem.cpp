vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>> ans;
        sort(products.begin(),products.end());
        string s;
        for(int i=0;i<searchWord.length();i++)
        {
            vector<string> v;
            s+=searchWord[i];
            for(int j=0;j<products.size();j++)
            { 
                if(products[j][0]>s[0]) break;
                if(products[j][0]<s[0]) continue;
                if(products[j][0]==s[0] && products[j].length()>=i+1)
                {
                    string k=products[j].substr(0,i+1);
                    if(k==s) v.push_back(products[j]);
                    if(v.size()==3) break;
                }
            }
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
