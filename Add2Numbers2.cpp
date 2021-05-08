ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> v1,v2;
        ListNode* t=l1;
        while(t)
        {
            v1.push_back(t->val);t=t->next;
        }
        t=l2;
        while(t)
        {
            v2.push_back(t->val);t=t->next;
        }
        reverse(v1.begin(),v1.end());reverse(v2.begin(),v2.end());
        for(int i=v1.size();i<v2.size();i++) v1.push_back(0);
        for(int i=v2.size();i<v1.size();i++) v2.push_back(0);
        int carry=0;
        for(int i=0;i<v1.size();i++)
        {
            int k=v1[i];
            v1[i]=(v1[i]+v2[i]+carry)%10;
            carry=(k+v2[i]+carry)/10;
        }
        if(carry>0) v1.push_back(carry);
        //reverse(v1.begin(),v1.end());
        //for(int i=0;i<v1.size();i++) cout<<v1[i];
        ListNode* start = NULL;
        ListNode* end = NULL;
        for(int i=v1.size()-1;i>=0;i--)
        {
            if(start==NULL)
            {
                start = end = new ListNode(v1[i]);
            }
            else
            {
                end->next = new ListNode(v1[i]);
                end= end->next;
            }
        }
        return start;
    }
