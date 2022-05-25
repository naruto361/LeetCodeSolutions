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
    vector<int> v;
    int sz=0;
    Solution(ListNode* head) {
        ListNode* temp=head;
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        sz=v.size();
    }
    
    int getRandom() {
        return v[rand()%sz];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
```
