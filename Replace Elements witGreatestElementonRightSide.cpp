class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi=arr[arr.size()-1];
        vector<int>ans(arr.size());
        ans[arr.size()-1]=-1;
        
        for(int i=arr.size()-2;i>=0;i--)
        {   
            ans[i]=max(maxi,arr[i+1]);
            maxi=max(arr[i],maxi);
        }
         return ans;
    }
};
