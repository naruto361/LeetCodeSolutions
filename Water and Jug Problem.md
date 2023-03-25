```cpp
class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        if(jug1Capacity+jug2Capacity<targetCapacity)
            return false;
        if(jug1Capacity==targetCapacity || jug2Capacity==targetCapacity || jug1Capacity+jug2Capacity==targetCapacity)
            return true;
        queue<pair<int,int>> q;
        set<pair<int,int>> vis;
        q.push({0,0});
        while(!q.empty()) {
            pair<int,int> p=q.front();
            q.pop();
            vis.insert(p);
            int x=p.first , y=p.second;
            if(x+y==targetCapacity) return true;
            int newx,newy;
            
            // case 1 pour x->y
            newx=x-min(x,jug2Capacity-y);
            newy=y+min(x,jug2Capacity-y);
            if(vis.find({newx,newy})==vis.end()) q.push({newx,newy});
            
            // case 2 pour y->x
            newx=x+min(y,jug1Capacity-x);
            newy=y-min(y,jug1Capacity-x);
            if(vis.find({newx,newy})==vis.end()) q.push({newx,newy});
            
            // case 3 x=0
            newx=0;
            newy=y;
            if(vis.find({newx,newy})==vis.end()) q.push({newx,newy});
            
            // case 4 y=0
            newx=x;
            newy=0;
            if(vis.find({newx,newy})==vis.end()) q.push({newx,newy});
            
            // case 5 fill x
            newx=jug1Capacity;
            newy=y;
            if(vis.find({newx,newy})==vis.end()) q.push({newx,newy});
            
            // case 6 fill y
            newx=x;
            newy=jug2Capacity;
            if(vis.find({newx,newy})==vis.end()) q.push({newx,newy});
            
        }
        return false;
    }
};
```
