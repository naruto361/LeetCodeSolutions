class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=1;
        if(num==1) return 0;
        for(int i=2;i*i<=num;i++)
        {
            if(i*i==num) sum+=num;
            else if(num%i==0) {sum+=i+num/i;}
        }
        if(sum==num) return 1;
        return 0;
    }
};
