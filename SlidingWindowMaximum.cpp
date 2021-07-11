class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // if(k==1) return nums;
        // else if(k==nums.size()) return {*max_element(nums.begin(),nums.end())};
        // multiset<int> s;
        // vector<int> ans;
        // for(int i=0;i<k;i++) s.insert(nums[i]);
        // ans.push_back(*(next( s.begin(), k-1 )));
        // for(int i=k;i<nums.size();i++)
        // {
        //     s.insert(nums[i]);
        //     s.erase(s.find(nums[i-k]));
        //     ans.push_back(*(next( s.begin(), k-1 )));
        // }
        // return ans;
        // deque<int> dq;
        // vector<int> ans;
        // for (int i=0; i<nums.size(); i++) {
        //     if (!dq.empty() && dq.front() == i-k) dq.pop_front();
        //     while (!dq.empty() && nums[dq.back()] < nums[i])
        //         dq.pop_back();
        //     dq.push_back(i);
        //     if (i>=k-1) ans.push_back(nums[dq.front()]);
        // }
        // return ans;
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
