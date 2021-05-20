bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return 0;
        else if(root->right==NULL && root->left==NULL && targetSum-root->val==0)
        {
            return 1;
        }
        else
            return hasPathSum(root->left,targetSum - root->val) || 
            hasPathSum(root->right,targetSum - root->val);
    }
