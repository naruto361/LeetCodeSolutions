class MapSum {
public:
    /** Initialize your data structure here. */
    MapSum() {
        
    }
    map<string,int> mp;
    void insert(string key, int val) {
        mp[key]=val;
    }
    
    int sum(string prefix) {
        int ans=0;
        for(auto &i:mp)
        {
            if(i.first.length()>=prefix.length())
            {
                string k=i.first.substr(0,prefix.length());
                    if(k==prefix) ans+=mp[i.first];
            }
        }
        return ans;
        
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
