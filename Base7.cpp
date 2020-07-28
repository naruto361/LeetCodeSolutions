class Solution {
public:
    string convertToBase7(int nums) {
        int num=abs(nums);
        vector<int>v;
        while(num>0)
        {   int k=num%7;
            v.push_back(k);
            num/=7;
        }
        int s=0;
        for(int i=v.size()-1;i>=0;i--)
        {
            s=s*10 + v[i];
        }
        string t=to_string(s);
        if(nums<0)
            return '-'+t;
        return t;
    }
};
