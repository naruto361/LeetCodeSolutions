ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* t=head;
        int x=1;
        vector<int> v;
        while(t)
        {
            if(x>=left && x<=right) v.push_back(t->val);
            t=t->next;
            x++;
        }
        t=head;
        int y=1,i=v.size()-1;
        while(t)
        {
            if(y>=left && y<=right) t->val=v[i--];
            y++;
            t=t->next;
        }
        return head;
    }
