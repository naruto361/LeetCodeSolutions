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
    ListNode* reverseList(ListNode* head)
    {
        ListNode* curr=head;
        ListNode *next=NULL,*prev=NULL;
        if(!curr || !curr->next) return head;
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
        // head=prev;
        // return head;
        
    }
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverseList(slow->next);
        slow=slow->next;
        ListNode* temp=head;
        while(slow)
        {
            if(temp->val != slow->val) return false;
            slow=slow->next;
            temp=temp->next;
        }
        return true;
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////

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
    bool isPalindrome(ListNode* head) {
        ListNode *curr=head;
        stack <int> s;
        while(curr)
        {
            s.push(curr->val);
            curr=curr->next;
        }
        ListNode*check=head;
        while(check)
        {
            if(check->val !=s.top())
                return 0;
            s.pop();
            check=check->next;
        }
        return 1;
    }
};
