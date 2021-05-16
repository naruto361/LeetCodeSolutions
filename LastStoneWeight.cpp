int lastStoneWeight(vector<int>& stones) {
        multiset<int,greater<int>> s;
        for(int i:stones) s.insert(i);
        while(s.size()>1)
        {
            auto it1=s.begin();
            auto it2=++s.begin();
            //cout<<*it1-*it2<<" ";
            if(*it1!=*it2) s.insert(*it1-*it2);
            s.erase(it1),s.erase(it2);
        }
        if(s.size()==0) return 0;
        return *s.begin();
    }
