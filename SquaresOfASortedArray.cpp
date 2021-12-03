class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        if(nums[0]>=0)
        {
            for(int i=0;i<n;i++) nums[i]*=nums[i];
            return nums;
        }
        if(nums[n-1]<=0)
        {
            for(int i=0;i<n;i++) nums[i]*=nums[i];
            reverse(nums.begin(),nums.end());
            return nums;
         }
        int i=INT_MAX,j=INT_MIN;
        for(int k=0;k<n;k++)
        {
            if(nums[k]<0) {
                i=k;
            }
            else if(nums[k]>0)
            {
                j=k;
                break;
            }
        }
        //cout<<i<<" "<<j;
        vector<int> ans;
        for(int k=i;k<j-1;k++) ans.push_back(0);
        while(i>=0 && j<n)
        {
            if(abs(nums[i])<=abs(nums[j]))
            {
                ans.push_back(nums[i]*nums[i]);
                i--;
            }
            else
            {
                ans.push_back(nums[j]*nums[j]);
                j++;
            }
        }
        while(i>=0)
        {
            ans.push_back(nums[i]*nums[i]);
            i--;
        }
        while(j<n)
        {
            ans.push_back(nums[j]*nums[j]);
            j++;
        }
        return ans;
    }
};
////////////////////////////////////////////////////////////////////
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for(int i=0;i<A.size();i++)
            A[i]=A[i]*A[i];
        sort(A.begin(),A.end());
        return A;
    }
};
