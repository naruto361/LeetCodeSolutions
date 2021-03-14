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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *p=head;
        vector<int> v;
        while(p)
        {
            v.push_back(p->val);
            p=p->next;
        }
        vector<int> ans(v.size());
        for(int i=0;i<v.size();i++)
        {
            ans[(i+k)%v.size()]=v[i];
        }
        ListNode *t=head;
        int x=0;
        while(t)
        {
            t->val=ans[x++];
            t=t->next;
        }
        return head;
    }
};
