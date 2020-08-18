class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int k=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]&1) 
            {
                k++;if(k==3) return 1;
            }
            else
                k=0;
        }
        return 0;
    }
};
