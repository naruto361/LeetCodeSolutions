bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL) return 0;
        if(same(root,subRoot)) return 1;
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
    bool same(TreeNode* x,TreeNode* y)
    {
        if(x==NULL && y==NULL) return 1;
        if(x==NULL || y==NULL) return 0;
        if(x->val!=y->val) return 0;
        return same(x->left,y->left) && same(x->right,y->right);
    }
