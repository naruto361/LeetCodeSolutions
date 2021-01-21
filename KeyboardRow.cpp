class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set <char> row1=                      {'Q','W','E','R','T','Y','U','I','O','P','q','w','e','r','t','y','u','i','o','p'};
        unordered_set <char> row2={'A','S','D','F','G','H','J','K','L','a','s','d','f','g','h','j','k','l'};
        unordered_set <char> row3={'Z','X','C','V','B','N','M','z','x','c','v','b','n','m'};
        vector<string> v;
        for(int i=0;i<words.size();i++)
        {
            if(row1.find(words[i][0])!=row1.end())
            {
                int x=1;
                for(int j=1;j<words[i].length();j++)
                {
                    if(row1.find(words[i][j])==row1.end()) {x=0;break;}
                }
                if(x==1) v.push_back(words[i]);
            }
            else if(row2.find(words[i][0])!=row2.end())
            {
                int x=1;
                for(int j=1;j<words[i].length();j++)
                {
                    if(row2.find(words[i][j])==row2.end()) {x=0;break;}
                }
                if(x==1) v.push_back(words[i]);
            }
            else if(row3.find(words[i][0])!=row3.end())
            {
                int x=1;
                for(int j=1;j<words[i].length();j++)
                {
                    if(row3.find(words[i][j])==row3.end()) {x=0;break;}
                }
                if(x==1) v.push_back(words[i]);
            }
        }
        return v;
    }
};
