int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        multiset<int> m;
        for(int i=1 ; i<heights.size() ; i++){
            if(heights[i]>heights[i-1]){
                m.insert(heights[i]-heights[i-1]);
            }
            if(m.size()>ladders){
                bricks-=*m.begin();
                m.erase(m.begin());
                if(bricks<0)return i-1;
            }
        }
        return heights.size()-1;
    }
