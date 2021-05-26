string countAndSay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";
        string res="11";
        for(int i=3;i<=n;i++)
        {
            int cnt=1;
            string t="";
            for(int j=1;j<res.size();j++)
            {
                if(res[j]==res[j-1])
                {cnt++;}
                else 
                {
                    t+=to_string(cnt);
                    t+=res[j-1];
                    cnt=1;
                }
                if(j==res.size()-1)
                {
                    t+=to_string(cnt);
                    t+=res[j];
                }
            }
            res=t;
        }
        return res;
    }
