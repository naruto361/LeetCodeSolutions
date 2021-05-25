int oper(string s)
    {
        if(s=="+") return 1;
        else if(s=="-") return 2;
        else if(s=="*") return 3;
        else if(s=="/") return 4;
        return 100;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++)
        {
            int z=oper(tokens[i]);
            if(z<=4)
            {
                int k=st.top();
                st.pop();
                if(z==1)
                {
                    st.top()=st.top()+k;
                }
                else if(z==2)
                {
                    st.top()=st.top()-k;
                }
                else if(z==3)
                {
                    st.top()=st.top()*k;
                }
                else if(z==4)
                {
                    st.top()=st.top()/k;
                }
                
            }
            else st.push(stoi(tokens[i]));
        }
        return st.top();
    }
