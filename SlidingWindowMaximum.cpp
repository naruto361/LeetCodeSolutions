class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(!dq.empty() && dq.front()==i-k) dq.pop_front();
            while(!dq.empty() && nums[i]>nums[dq.back()]) dq.pop_back();
            dq.push_back(i);
            if(i>=k-1) ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};
//////////////////////////////////////////////////////////
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k==1) return nums;
        if(k==nums.size()) return {*max_element(nums.begin(),nums.end())};
        int n=nums.size();
        vector<int> v(n,nums.size());
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && nums[i]>nums[st.top()])
            {
                v[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        vector<int> maxi(n-k+1);
        int j=0;
        for(int i=0;i<=n-k;i++)
        {
            int l=i+k;
            int temp;
            if(j<i) j=i;
            while(v[j]<l)
            {
                j=v[j];
            }
            maxi[i]=nums[j];
        }
        return maxi;
    }
};
