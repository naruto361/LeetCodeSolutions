void check(TreeNode* &root,int &sum)
    {
        if(root==NULL) return ;
        check(root->right,sum);
        root->val+=sum;
        sum=root->val;
        check(root->left,sum);
    }
    TreeNode* convertBST(TreeNode* root) {
        int sum=0;
        check(root,sum);
        return root;
    }
