class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()==0) return 0;
        vector<int> right;
        int rightmaxi=0;
        //right.push_back(height[height.size()-1]);
        for(int i=height.size()-2;i>=0;i--)
        {
            rightmaxi=max(rightmaxi,height[i+1]);
            right.push_back(rightmaxi);
        }
        
        reverse(right.begin(),right.end());
        right.push_back(0);
        int ans=0;
        int leftmaxi=0;
        for(int i=1;i<height.size()-1;i++)
        {
            leftmaxi=max(leftmaxi,height[i-1]);
            if(min(leftmaxi,right[i])-height[i]>0)
            ans+=min(leftmaxi,right[i])-height[i];
        }
        return ans;
    }
};
