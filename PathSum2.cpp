void check(TreeNode* root,int targetSum,vector<int> &curr,vector<vector<int>> &paths)
    {
        if(root==NULL) return ;
        curr.push_back(root->val);
        if(root->right==NULL && root->left==NULL &&
          targetSum-root->val==0)
        {
            paths.push_back(curr);
        }
        check(root->left,targetSum-root->val,curr,paths);
        check(root->right,targetSum-root->val,curr,paths);
        curr.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> paths;
        vector<int> curr;
        check(root,targetSum,curr,paths);
        return paths;
    }
