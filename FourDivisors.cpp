class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            long double sr = sqrt(nums[i]); 
  
            if((sr - floor(sr)) == 0) continue;
            int k=0;
            int ans=1+nums[i];
            for(int j=2;j*j<nums[i];j++)
            {
                if(nums[i]%j==0) {k++;ans+=j;ans+=nums[i]/j;}
                if(k>1) break;
            }
            if(k==1) sum+=ans;
        }
        return sum;
    }
};
