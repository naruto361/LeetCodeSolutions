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
    void answer(vector<vector<int>> &v,TreeNode *root)
{
    if(root==NULL) return ;
    queue<TreeNode*> q;
    q.push(root);
    vector<int> t;
    while(!q.empty())
    {
        int n=q.size();
        for(int i=0;i<n;i++)
        {
            TreeNode *temp=q.front();
            q.pop();
            t.push_back(temp->val);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        v.push_back(t);
        t.clear();
    }
}
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> v;
   answer(v,root);
   vector<int> ans;
   for(int i=0;i<v.size();i++)
   {
       ans.push_back(v[i][v[i].size()-1]);
   }
   return ans;
    }
};
