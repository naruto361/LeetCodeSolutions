class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0]==10 || bills[0]==20 || bills[1]==20) return 0;
        int a=0,b=0,c=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5) a++;
            else if(bills[i]==10)
            {
                b++;
                if(a==0) return 0;
                a--;
            }
            else
            {
                c++;
                if(a>0 && b>0)
                {a--;b--;}
                else if(b==0&& a>=3)
                    a=a-3;
                else return 0;
            }
        }
        return 1;
    }
};
