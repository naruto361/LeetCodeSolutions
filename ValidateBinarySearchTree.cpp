long long m=-1e10;
    int f=true;
    void ok(TreeNode* root)
    {
        if(root==NULL) return ;
        ok(root->left);
        if(root->val<=m) {f=false;return;}
        m=root->val;
        ok(root->right);
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return 1;
        if(!root->left && !root->right) return 1;
        ok(root);
        return f;
    }
/***************************************************************/
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
    bool isValidBST(TreeNode* root, TreeNode* minNode, TreeNode* maxNode) {
    if(!root) return true;
    if(minNode && root->val <= minNode->val || maxNode && root->val >= maxNode->val)
        return false;
    return isValidBST(root->left, minNode, root) && isValidBST(root->right, root, maxNode);
}
    bool isValidBST(TreeNode* root) {
        return isValidBST(root, NULL, NULL);
    }
};
