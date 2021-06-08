void func(vector<int> &v,TreeNode* root)
    {
        if(root==NULL) return ;
        if(!root->left && !root->right)
        v.push_back(root->val);
        func(v,root->left);
        func(v,root->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL ^ root2==NULL) return 0;
        vector<int> v1,v2;
        func(v1,root1);
        func(v2,root2);
        for(int &i:v1) cout<<i<<" ";
        cout<<endl;
        for(int &i:v2) cout<<i<<" ";
        return v1==v2;
    }
