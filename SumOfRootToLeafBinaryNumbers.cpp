void check(int &ans,int sum,TreeNode* root)
    {
        if(!root) return ;
        if(!root->left && !root->right)
        {
            sum=sum*2+root->val;
            ans+=sum;
            cout<<sum<<" "<<ans<<endl;
            return ;
        }
        if(root->left) check(ans,sum*2+root->val,root->left);
        if(root->right) check(ans,sum*2+root->val,root->right);
    }
    int sumRootToLeaf(TreeNode* root) {
        int ans=0;
        check(ans,0,root);
        return ans;
    }
