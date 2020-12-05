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
    vector<double> averageOfLevels(TreeNode* root) {
        if (root == NULL) return {};
        vector<double>res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()) {
            // n is the number of nodes in the current level
            int n = q.size();
            double ans=0;
            for (int i = 0; i<n; i++) {
                TreeNode* temp = q.front();
                q.pop();
                ans+=(temp->val);
                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right) {
                    q.push(temp->right);
                }
            }
            res.push_back(ans/n);
            //temparr.clear();
        }
        return res;
        
    }
};
