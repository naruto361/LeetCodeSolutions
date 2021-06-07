vector<int> rightSideView(TreeNode* root) {
        if(root==NULL) return {};
        vector<int> temp;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int x;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* k=q.front();
                q.pop();
                x=k->val;
                if(k->left) q.push(k->left);
                if(k->right) q.push(k->right);
            }
            temp.push_back(x);
        }
        return temp;
    }
