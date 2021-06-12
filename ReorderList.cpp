void reorderList(ListNode* head) {
        vector<int> v;
        ListNode* t=head;
        while(t)
        {
            v.push_back(t->val);
            t=t->next;
        }
        t=head;
        int i=0,j=v.size()-1;
        int c=0;
        while(i<=j)
        {
            if(c==0)
            {
                t->val=v[i++];
            }
            else
            {
                t->val=v[j--];
            }
            c=++c%2;
            t=t->next;
        }
    }
