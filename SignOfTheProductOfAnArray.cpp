int arraySign(vector<int>& nums) {
        int neg=0;
        for(int i:nums)
        {
            if(i==0) return 0;
            if(i<0) 
            {
                if(neg==0) neg=1;
                else neg=0;
            }
        }
        if(neg) return -1;
        return 1;
    }
