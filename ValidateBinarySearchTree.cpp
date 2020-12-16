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
    void inorder(vector<int> &v,TreeNode* root)
    {
        if(root==NULL) return;
        inorder(v,root->left);
        v.push_back(root->val);
        inorder(v,root->right);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> v;
        inorder(v,root);
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]>=v[i+1]) return 0;
        }
        return 1;
    }
};
