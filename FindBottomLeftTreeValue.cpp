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
    int findBottomLeftValue(TreeNode* root) {
        if (root == NULL) return 0;
        int ans=root->val;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()) {
            // n is the number of nodes in the current level
            int n = q.size();
            for (int i = 0; i<n; i++) {
                TreeNode* temp = q.front();
                q.pop();
                if (temp->right) {
                    q.push(temp->right);
                    ans=temp->right->val;
                }
                if (temp->left) {
                    ans=temp->left->val;
                    q.push(temp->left);
                }
            }
        }
        
        return ans;
    }
};
