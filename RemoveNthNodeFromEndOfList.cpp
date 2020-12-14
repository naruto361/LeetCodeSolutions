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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k=0;
        ListNode* t=head;
        while(t)
        {
            k++;
            t=t->next;
        }
        if(k==n) return head->next;
        int x=0;
        ListNode* temp=head;
        while(temp)
        {
            x++;
            if(k-x==n)
                temp->next=temp->next->next;
            temp=temp->next;
        }
        return head;
    }
};
