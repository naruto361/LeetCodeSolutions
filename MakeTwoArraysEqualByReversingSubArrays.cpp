class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int f1[1001]={0},f2[1001]={0};
        for(int i=0;i<target.size();i++)
            f1[target[i]]++;
        for(int i=0;i<arr.size();i++)
            f2[arr[i]]++;
        for(int i=1;i<1001;i++)
            if(f1[i]!=f2[i]) return 0;
        return 1;
    }
};
