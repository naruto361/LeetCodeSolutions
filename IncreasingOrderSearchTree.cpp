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
    void inorder(TreeNode* root,vector<TreeNode*>& nodes)
    {
        if(root==NULL) return;
        inorder(root->left,nodes);
        nodes.push_back(root);
        inorder(root->right,nodes);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<TreeNode*> nodes;
        inorder(root,nodes);
        int N = nodes.size();
        root = nodes[0];
        TreeNode* curr = root;
        for (int i = 1; i < N; i++) {
            nodes[i]->left = NULL;
            curr->left = NULL;
            curr->right = nodes[i];
            curr = curr->right;
        }
        return root;
    }
};
