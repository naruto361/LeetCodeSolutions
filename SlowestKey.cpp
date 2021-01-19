class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        vector<char> c;
        int maxi=releaseTimes[0];
        for(int i=1;i<releaseTimes.size();i++)
        {
            maxi=max(maxi,releaseTimes[i]-releaseTimes[i-1]);
        }
        if(releaseTimes[0]==maxi) c.push_back(keysPressed[0]);
        for(int i=1;i<releaseTimes.size();i++)
        {
            if(releaseTimes[i]-releaseTimes[i-1]==maxi) c.push_back(keysPressed[i]);
        }
        sort(c.begin(),c.end());
        return c[c.size()-1];
        
        
        
    }
};
