class Solution {
public:
    int maxArea(vector<int>& height) {
        int len=height.size();
        int maxarea = 0, l = 0, r = len - 1;
        while (l < r) {
            maxarea = max(maxarea, min(height[l], height[r]) * (r - l));
            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        return maxarea;
    }
};
