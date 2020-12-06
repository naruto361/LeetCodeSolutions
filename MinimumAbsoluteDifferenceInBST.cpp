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
    void inorder(TreeNode* root,int &prev,int &mini)
    {
        if(root==NULL) return;
        inorder(root->left,prev,mini);
        if(prev!=-1)
            mini=min(root->val-prev,mini);
        prev=root->val;
        inorder(root->right,prev,mini);
    }
    int getMinimumDifference(TreeNode* root) {
        int mini=INT_MAX;
        int prev=-1;
        inorder(root,prev,mini);
        return mini;
        
    }
};
