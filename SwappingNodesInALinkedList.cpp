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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *p=head;
        vector<int> v;
        while(p)
        {
            v.push_back(p->val);p=p->next;
        }
        swap(v[k-1],v[v.size()-k]);
        ListNode *l=head;
        int i=0;
        while(l)
        {
            l->val=v[i++];
            l=l->next;
        }
        return head;
        
        
    }
};
