class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0,a=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum<1)
            {a+=abs(sum)+1;
                sum=1;}
            
        }
        if(a==0) return 1;
        return a;
    }
};
