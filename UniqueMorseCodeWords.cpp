class Solution {
public:
    string change(char c)
    {
        switch(c)
        {
            case 'a':return ".-";break;
            case 'b':return "-...";break;
            case 'c':return "-.-.";break;
            case 'd':return "-..";break;
            case 'e':return ".";break;
            case 'f':return "..-.";break;
            case 'g':return "--.";break;
            case 'h':return "....";break;
            case 'i':return "..";break;
            case 'j':return ".---";break;
            case 'k':return "-.-";break;
            case 'l':return ".-..";break;
            case 'm':return "--";break;
            case 'n':return "-.";break;
            case 'o':return "---";break;
            case 'p':return ".--.";break;
            case 'q':return "--.-";break;
            case 'r':return ".-.";break;
            case 's':return "...";break;
            case 't':return "-";break;
            case 'u':return "..-";break;
            case 'v':return "...-";break;
            case 'w':return ".--";break;
            case 'x':return "-..-";break;
            case 'y':return "-.--";break;
            case 'z':return "--..";break;
                default :return "";
                
        }
    }
    int uniqueMorseRepresentations(vector<string>& words) {
        map<string,int> mp;
        for(int i=0;i<words.size();i++)
        {   string s="";
            for(int j=0;j<words[i].length();j++)
            {
                s+=change(words[i][j]);
            }
         mp[s]++;
        }
        int k=0;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
             k++;
        }
        return k;
    }
};
