```cpp
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(auto &i:asteroids)
        {
            st.push(i);
            // st.size()>=2 && ff<0 && ss>0
            while(st.size()>1)
            {
                int ff=st.top();st.pop();
                int ss=st.top();st.pop();
                if(ff<0 && ss>0){
                    if(ff+ss<0) st.push(ff);
                    else if(ff+ss>0) st.push(ss);
                    else break;
                }
                else
                {
                    st.push(ss);
                    st.push(ff);break;
                }
            }
            
        }
        vector<int> ans;
        while(!st.empty()) {ans.push_back(st.top());st.pop();}
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
```
