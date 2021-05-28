int maxProduct(vector<string>& words) {
        vector<int> v(words.size());
        int maxi=0;
        for(int i=0;i<words.size();i++)
        {
            for(char c:words[i])
            {
                v[i]|=1<<(c-'a');
            }
            for(int j=0;j<i;j++)
            {
                if((v[i]&v[j]) ==0)
                {
                    maxi=max(maxi,(int)words[i].length()*(int)words[j].length());
                }
            } 
        }
        return maxi;
    }
