class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> a;
        int i=1;
        int j=n-1;
        while(1)
        {
            int k1=1,k2=1;
            int x=j;
            int y=i;
            while(x>0)
            {
                int r=x%10;
                if(r==0)
                k1=0;
                x/=10;
            }
            while(y>0)
            {
                 int r=y%10;
                if(r==0)
                k2=0;
                y/=10;
            }
            if(k1==1 && k2==1) break;
            else
            {
                i++;j--;
            }
        }
        
        a.push_back(i);
        a.push_back(j);
        return a;
    }
};
