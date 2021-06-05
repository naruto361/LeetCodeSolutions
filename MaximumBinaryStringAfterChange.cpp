string maximumBinaryString(string binary) {
        if(binary.length()<2) return binary;
        int l=binary.length();
        int mini=l+1;
        bool ok=0;
        int ans=0;
        for(int i=0;i<l;i++)
        {
            if(binary[i]=='0' && ok==0)
            {
                mini=i;ok=1;
            }
            else if(binary[i]=='0' && ok==1)
            {
                ans++;
            }
        }
        if(mini==l+1) return binary;
        for(int i=0;i<l;i++) binary[i]='1';
        binary[ans+mini]='0';
        return binary;
    }
