class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++)
        {
            int x=i,z=1;
            while(x>0)
            {
                int r=x%10;
                if( r==0 || i%r!=0 ) {z=-1;break;}
                x/=10;
            }
            if(z==1) ans.push_back(i);
        }
        return ans;
    }
};
