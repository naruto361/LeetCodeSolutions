[Alphabet Board Path](https://leetcode.com/problems/alphabet-board-path/)
```cpp
class Solution {
public:
    string alphabetBoardPath(string target) {
        map<char,pair<int,int>> mp;
        int i=0,j=0;
        for(char c='a';c<='z';c++)
        {
            mp[c]={i/5,j%5};
            //cout<<c<<" : "<<i/5<<" "<<j%5<<'\n';;
            i++;j++;
        }
        char prev='a';
        string ans;
        for(int k=0;k<target.length();k++)
        {
            char c=target[k];
            int x1=mp[prev].first;
            int x2=mp[c].first;
            int y1=mp[prev].second;
            int y2=mp[c].second;
                
                if(y1>y2)
                {
                    int l=y1-y2;
                    while(l--) ans += 'L';
                }
                if(x2>x1)
                {
                    int d=x2-x1;
                    while(d--) ans +=' D';
                }
                if(x1>x2)
                {
                    int u=x1-x2;
                    while(u--) ans +='U';
                }
                if(y2>y1)
                {
                    int r=y2-y1;
                    while(r--) ans += 'R';
                }
            ans +='!';
            prev=c;
        }
        return ans;
    }
};
```
