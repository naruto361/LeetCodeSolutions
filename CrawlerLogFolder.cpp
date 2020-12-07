class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans=0;
        for(int i=0;i<logs.size();i++)
        {
            if(logs[i]=="../") ans--;
            else if(logs[i]=="./") continue;
            else ans++;
            
            if(ans<0) ans=0;
        }
        if(ans>0)
        return ans;
        return 0;
    }
};
