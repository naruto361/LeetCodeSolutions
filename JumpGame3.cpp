class Solution {
public:
    bool check(vector<int> &arr,int i,vector<bool> &vis)
    {
        if(i<0 || i>=arr.size() || vis[i]) return false;
        vis[i]=true;
        if(arr[i]==0) return true;
        return (check(arr,i+arr[i],vis) || check(arr,i-arr[i],vis));
        
    }
        bool canReach(vector<int>& arr, int start) {
        vector<bool> vis(arr.size(),false);
        return check(arr,start,vis);
    }
};
