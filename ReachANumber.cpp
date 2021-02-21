class Solution {
public:
    int reachNumber(int target) {
        target=abs(target);
        int ans=0,sum=0;
        while(1)
        {
            ans++;
            sum+=ans;
            if(sum==target) return ans;
            if(sum>target)
            {
                if((sum-target)%2==0) return ans;
            }
        }
        return 0;
    }
};
