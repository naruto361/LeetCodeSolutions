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
