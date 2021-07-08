class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        return nums[k-1];
    }
};
/****************************************************/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int &i:nums)
        {
            if(pq.size()<k) pq.push(i);
            else if(i>pq.top()) 
            {
                pq.pop();
                pq.push(i);
            }
        }
        return pq.top();
    }
};
