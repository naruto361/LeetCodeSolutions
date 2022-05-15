[Vertical Order Traversal of a Binary Tree](https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/)
```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(!root) return {};
        map<int,map<int,multiset<int>>> mp;
        // left/right , up/down,node ---> index , level,node
        queue<pair<int,pair<int,TreeNode*>>> q;
        q.push({0,{0,root}});
        while(!q.empty())
        {
            int index=q.front().first;
            int level=q.front().second.first;
            TreeNode* temp=q.front().second.second;
            q.pop();
            mp[index][level].insert(temp->val);
            if(temp->left)
            {
                q.push({index-1,{level+1,temp->left}});
            }
            if(temp->right)
            {
                q.push({index+1,{level+1,temp->right}});
            }
        }
        vector<vector<int>> ans;
        for(auto &i:mp)
        {
            vector<int> v;
            for(auto &j:i.second)
            {
                //for(auto k=j.second.begin();k!=j.second.end();k++) v.push_back(*k);
                for(auto &k:j.second) v.push_back(k);
            }
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
};
```
