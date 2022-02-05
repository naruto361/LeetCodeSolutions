************1*****************
class Solution {
public:
    
    // Time Complexity - O(kN)
    ListNode* merge(ListNode* l1,ListNode* l2)
    {
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode* head = (l1->val <=l2->val) ? l1:l2;
        if(l1->val <= l2->val) head->next = merge(l1->next,l2);
        else head->next = merge(l1,l2->next);
        return head;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        for(int i=1;i<lists.size();i++)
        {
            lists[0]=merge(lists[0],lists[i]);
        }
        return lists[0];
    }
};

************2******************

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<lists.size();i++)
        {
            ListNode* head = lists[i];
            while(head!=NULL)
            {
                pq.push(head->val);
                head = head->next;
            }
        }
        ListNode* start = NULL;
        ListNode* end = NULL;
        while(!pq.empty())
        {
            if(start==NULL)
            {
                start = end = new ListNode(pq.top());
            }
            else
            {
                end->next = new ListNode(pq.top());
                end= end->next;
            }
            pq.pop();
        }
        return start;
    }
};
