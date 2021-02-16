class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        set<int> s;
        s.insert(pow(abs(p1[0]-p2[0]),2)+pow(abs(p1[1]-p2[1]),2));
        s.insert(pow(abs(p1[0]-p3[0]),2)+pow(abs(p1[1]-p3[1]),2));
        s.insert(pow(abs(p1[0]-p4[0]),2)+pow(abs(p1[1]-p4[1]),2));
        
        s.insert(pow(abs(p2[0]-p3[0]),2)+pow(abs(p2[1]-p3[1]),2));
        s.insert(pow(abs(p2[0]-p4[0]),2)+pow(abs(p2[1]-p4[1]),2));
        
        s.insert(pow(abs(p3[0]-p4[0]),2)+pow(abs(p3[1]-p4[1]),2));

        for(auto i=s.begin();i!=s.end();i++) cout<<*i<<" ";
        if(s.find(0)!=s.end()) return 0;
        if(s.size()==2) return 1;
        else return 0;
    }
};
