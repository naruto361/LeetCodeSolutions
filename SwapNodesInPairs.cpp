ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        // dummy becomes new head;
        ListNode* curr=dummy;
        while(curr->next && curr->next->next)
        {
            ListNode* first=curr->next;
            ListNode* second=curr->next->next;
            
            curr->next=first->next;
            first->next=second->next;
            second->next=first;
            curr=curr->next->next;
        }
        return dummy->next;
    }


class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* t=head;
        while(t!=NULL && t->next!=NULL)
        {
            swap(t->val,t->next->val);
            t=t->next->next;
        }
        return head;
    }
};
