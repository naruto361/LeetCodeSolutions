long min1=1e10,min2=1e10;
    void ok(TreeNode* root)
    {
        if(root==NULL) return;
        ok(root->left);
        if(root->val<min1)
        {
            min2=min1;
            min1=root->val;
        }
        else if(root->val<min2 && root->val!=min1) 
            min2=root->val;
        ok(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        ok(root);
        cout<<min1<<" "<<min2;
        return min2==1e10 ? -1:(int)min2;
    }
