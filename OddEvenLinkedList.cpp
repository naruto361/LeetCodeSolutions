/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
//////////////////////////////////////////////////////////////////////
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return NULL;
        if(!head->next) return head;
        ListNode* start=NULL;
        ListNode* end=NULL;
        start=end=new ListNode(head->val);
        ListNode* t=head->next->next;
        while(t)
        {
            end->next=new ListNode(t->val);
            end=end->next;
            if(t->next)
                t=t->next->next;
            else break;
        }
        t=head;
        t=t->next;
        while(t)
        {
            end->next=new ListNode(t->val);
            end=end->next;
            if(t->next)
                t=t->next->next;
            else break;
        }
        return start;
    }
};
