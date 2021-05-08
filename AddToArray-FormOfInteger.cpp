vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> k1;
        while(k>0)
        {
            k1.push_back(k%10);k/=10;
        }
        int l=k1.size();
        for(int i=l;i<num.size();i++) k1.push_back(0);
        reverse(num.begin(),num.end());
        for(int i=num.size();i<l;i++) num.push_back(0);
        int carry=0;
        for(int i=0;i<num.size();i++)
        {
            int p=num[i];
            num[i]=(num[i]+k1[i]+carry)%10;
            carry=(p+k1[i]+carry)/10;
        }
        if(carry>0) num.push_back(carry);
        reverse(num.begin(),num.end());
        return num;
    }
