class Solution {
public:
    int dayOfYear(string s) {
        int y=0;
        for(int i=0;i<4;i++)
        {
            y=y*10 +(s[i]-'0');
        }
        int m=(s[5]-'0')*10 + s[6]-'0';
        int d=(s[8]-'0')*10 + s[9]-'0';
        int ans=d;
        if(m>2)
        {if(y%400==0)
        ans+=29;
        else if(y%100==0)
        ans+=28;
        else if(y%4==0)
        ans+=29;
        else ans+=28;}
        for(int i=1;i<=m-1;i++)
        {
            if(i==2) continue;
            else if(i==1 || i==3||i==5||i==7||i==8|| i==10) ans+=31;
            else ans+=30;
        }
        
        return ans;
    }
};
