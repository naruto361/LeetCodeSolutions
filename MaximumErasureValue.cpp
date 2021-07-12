O(N) O(1)
int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size(), sum = 0, maxi = 0, l = 0, r = 0;
        bool freq[10001]{false};
        while(r < n) 
        {
            while(freq[nums[r]])
                sum -= nums[l], freq[nums[l++]] = false;
            sum += nums[r], freq[nums[r++]] = true;  
            maxi = max(maxi, sum);    
        }
        return maxi;
    }
/********************************************/
O(N) O(N)
        class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = size(nums), cur_sum = 0, ans = 0, l = 0, r = 0;
        unordered_set<int> s;
        while(r < n) {
            while(s.find(nums[r]) != end(s))
                cur_sum -= nums[l], s.erase(nums[l++]);
            cur_sum += nums[r], s.insert(nums[r++]);
            ans = max(ans, cur_sum);
        }
        return ans;
    }
};
