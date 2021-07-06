vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        vector<int> one;
        one.push_back(1);
        for(int i=1;i<digits.size();i++) one.push_back(0);
        int carry=0;
        for(int i=0;i<digits.size();i++)
        {
            int k=digits[i];
            digits[i]=(carry+digits[i]+one[i])%10;
            carry=(k+carry+one[i])/10;
        }
        if(carry>0) digits.push_back(carry);
        reverse(digits.begin(),digits.end());
        return digits;
    }
/*******************************************/
        int carry=1;
        int n=digits.size();
            for(int i=n-1;i>=0;i--)
            {
                digits[i]+=carry;
                carry=digits[i]/10;
                digits[i]=digits[i]%10;
            }
        if(carry!=0) digits.insert(digits.begin(),carry);
        return digits;
