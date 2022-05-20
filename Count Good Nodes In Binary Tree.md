[Count Good Nodes in Binary Tree](https://leetcode.com/problems/count-good-nodes-in-binary-tree/)
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
    int ans=1;
    void solve(TreeNode* root,int maxi)
    {
        if(!root) return ;
        //if(!root->left && !root->right) return 1;
        int temp=maxi;
        if(root->right)
        {
            if(root->right->val >= temp)
            {
                //cout<<root->right->val<<' ';
                ans++;
                temp=root->right->val;
            }
        }
        solve(root->right,temp);
        if(root->left)
        {
            if(root->left->val >= maxi)
            {
                //cout<<root->left->val<<' ';
                ans++;
                maxi=root->left->val;
            }
        }
        solve(root->left,maxi);
    }
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        if(!root->left && !root->right) return 1;
        solve(root,root->val);
        return ans;
    }
};
```
