```cpp
class Solution {
public:
    int compress(vector<char>& arr) {
        char prev=arr[0];
        vector<char> ans;
        ans.push_back(prev);
        int len=1;
        for(int i=1;i<arr.size();i++)
        {
            len=1;
            while(i<arr.size() && arr[i]==arr[i-1])
            {
                ++len;
                i++;
            }
            if(i>=arr.size()) break;
            if(len>1) 
            {
                stack<char> st;
                while(len>0)
                {
                    st.push(len%10 +'0');
                    len/=10;
                }
                while(!st.empty()) {ans.push_back(st.top());st.pop();}
            }
            prev=arr[i];
            ans.push_back(prev);
            
        }
        if(len>1)
        {
            stack<char> st;
                while(len>0)
                {
                    st.push(len%10 +'0');
                    len/=10;
                }
                while(!st.empty()) {ans.push_back(st.top());st.pop();}
        }
        arr=ans;
        return ans.size();
    }
};
```
