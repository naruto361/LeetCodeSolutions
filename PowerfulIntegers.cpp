class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        set<int> s1,s2;
        s1.insert(1);
        s2.insert(1);
        if(x!=1)
        for(int i=x;i<=bound;i=i*x) s1.insert(i);
        if(y!=1)
        for(int i=y;i<=bound;i=i*y) s2.insert(i);
        vector<int> v;
        //if(bound>=2) v.push_back(2);
        for(int i=2;i<=bound;i++)
        {
            for(auto j=s1.begin();j!=s1.end();j++)
            {
                if(*j>=i) break;
                if( s2.find(i-*j) !=s2.end()) {v.push_back(i);break;}
            }
        }
        return v;
    }
};
