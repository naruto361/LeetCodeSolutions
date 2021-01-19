class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        int ans=0;
        int m=1e9+7;
        unordered_map<int,int> mp;
        for(int x : deliciousness)
        {
            for(int i=1;i<=(1<<22);i*=2)
                //if(mp.find(i-x)!=mp.end()) ans+=mp[i-x];
                if(mp.count(i-x)) ans=(ans%m+mp[i-x]%m)%m;
            mp[x]++;
        }
        return ans%m;
        
    }
};
