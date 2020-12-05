class Solution {
public:
    int integerBreak(int n) {
        if(n==2) return 1;
        else if(n==3) return 2;
        else if(n==4) return 4;
        int three=n/3;
        int r=n%3;
        int ans=1;
        if(r==1)
        {   ans=ans*4;
            ans=ans*pow(3,three-1);
        }
        else if(r==0)
        {
            ans=pow(3,three);
        }
        else ans=pow(3,three) * r;
        return ans;
        
    }
};
