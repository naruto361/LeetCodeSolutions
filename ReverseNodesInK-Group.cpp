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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1) return head;
        vector<int> v;
        ListNode *p=head;
        while(p)
        {
            v.push_back(p->val);
            p=p->next;
        }
        for(int i=0;i<v.size();i=i+k)
        {
            if(i+k >v.size()) break;
            reverse(v.begin()+i,v.begin()+i+k);
        }
        ListNode *t=head;
        int z=0;
        while(t)
        {
            t->val=v[z++];
            t=t->next;
        }
        return head;
        
        
    }
};
