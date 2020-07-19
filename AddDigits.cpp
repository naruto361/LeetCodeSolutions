class Solution {
public:
    int addDigits(int num) {
        
        int r;
        int sum=0;
        while(num>0)
        {
            r=num%10;
            sum+=r;
            num=num/10;
        }
        if(sum<=9) return sum;
        return addDigits(sum);
    }
};
