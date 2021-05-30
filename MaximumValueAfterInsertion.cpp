string maxValue(string n, int x) {
        int neg=0;
        if(n[0]=='-')
        {
            neg=1;
            n=n.substr(1,n.length());
        }
        char ss=x+'0';
        string s=to_string(x);
        for(int i=0;i<n.length();i++)
        {
            
            if(neg && ss<n[i])
            {
                n.insert(i,s);return "-"+n;
            }
            else
            {
                if(neg==0 && ss>n[i])
                {
                    n.insert(i,s);return n;
                }
            }
        }
        if(neg) return "-"+n+s;
        return n+s;
    }
