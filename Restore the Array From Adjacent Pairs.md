```cpp
class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        map<int,vector<int>> mp;
        for(auto &i:adjacentPairs)
        {
            mp[i[0]].push_back(i[1]);
            mp[i[1]].push_back(i[0]);
        }
        map<int,bool> vis;
        int start;
        for(auto &i:mp)
        {
            if(i.second.size()==1) start=i.first;
        }
        vector<int> ans;
        queue<int> q;
        q.push(start);
        vis[start]=true;
        //cout<<start;
        while(!q.empty())
        {
            int j=q.front();
            q.pop();
            ans.push_back(j);
            for(auto &i:mp[j])
            {
                if(!vis[i])
                {
                    vis[i]=true;
                    q.push(i);
                }
            }
        }
        return ans;
    }
};
```
