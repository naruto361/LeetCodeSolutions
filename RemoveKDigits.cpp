string removeKdigits(string num, int k) {
        while(k>0)
        {   int i=0;
            while (i<num.length()-1 && num[i]<=num[i+1])  i++;
            num.erase(i, 1);
            k--;
        }
        while(num[0]=='0') num.erase(0,1);
        if(num.size()==0) num+='0';
        return num;
    }
