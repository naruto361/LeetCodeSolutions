## stack
```cpp
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
    void reorderList(ListNode* head) {
        if(!head || !head->next) return ;
        stack<ListNode*> st;
        ListNode* temp=head;
        int sz=0;
        while(temp)
        {
            st.push(temp);
            temp=temp->next;
            ++sz;
        }
        temp=head;
        for(int i=0;i<sz/2;i++)
        {
            ListNode* k=st.top();
            st.pop();
            k->next=temp->next; // 4 ka next 2
            temp->next=k; // 1 ka next 4
            temp=temp->next->next; // 1 se 4 , 4 se 2
        }
        temp->next=NULL;
    }
};
```
## vector
```cpp
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
```
