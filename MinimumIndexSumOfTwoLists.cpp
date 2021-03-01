class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int m=list1.size(),n=list2.size();
        map<string,int> mp;
        vector<string> ans;
        int mini=INT_MAX;
        for(int i=0;i<n;i++) mp[list2[i]]=i;
        
        for(int i=0;i<list1.size();i++)
        {
            if(mp.count(list1[i]) !=0)
            {
                mini=min(mini,i+mp[list1[i]]);
            }
        }
        for(int i=0;i<list1.size();i++)
        {
            if(mp.count(list1[i]) !=0)
            {
                if(mini==i+mp[list1[i]]) ans.push_back(list1[i]);
            }
        }
        return ans;
    }
};
