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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == NULL) return {};
        vector<vector<int>>res;
        queue<TreeNode*>q;
        q.push(root);
        vector<int>temparr;
        while(!q.empty()) {
            // n is the number of nodes in the current level
            int n = q.size();
            for (int i = 0; i<n; i++) {
                TreeNode* temp = q.front();
                q.pop();
                temparr.push_back(temp->val);
                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right) {
                    q.push(temp->right);
                }
            }
            res.push_back(temparr);
            temparr.clear();
        }
        return res;
    }
};
