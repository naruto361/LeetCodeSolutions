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
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL) return 1;
        int k=root->val;
        if(root->left!=NULL && root->left->val !=k) return 0;
        if(root->right!=NULL && root->right->val !=k) return 0;
        return isUnivalTree(root->left) && isUnivalTree(root->right);
    }
};
