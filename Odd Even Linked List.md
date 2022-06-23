```cpp
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return NULL;
        if(!head->next) return head;
        ListNode *start_odd=NULL,*end_odd=NULL,*start_even=NULL,*end_even=NULL;
        int idx=1;
        ListNode* t=head;
        while(t)
        {
            if(idx==1)
            {
                if(start_odd==NULL)
                {
                    start_odd=end_odd=new ListNode(t->val);
                }
                else
                {
                    end_odd->next=new ListNode(t->val);
                    end_odd=end_odd->next;
                }
            }
            else
            {
                if(start_even==NULL)
                {
                    start_even=end_even=new ListNode(t->val);
                }
                else
                {
                    end_even->next=new ListNode(t->val);
                    end_even=end_even->next;
                }
            }
            idx^=1;
            t=t->next;
        }
        end_odd->next=start_even;
        return start_odd;
    }
};
```

```cpp
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return head;
        ListNode *odd=head,*even=head->next,*even_head=head->next;
        while(even && even->next)
        {
            odd->next=odd->next->next;
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=even_head;
        return head;
    }
};
       
```
