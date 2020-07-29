class NumArray {
public:
    int f[10000]={0};
    NumArray(vector<int>& nums) {
        
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            f[i]=sum;
        }
    }
    
    int sumRange(int i, int j) {
        if(i==0) return f[j];
        else return f[j]-f[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
