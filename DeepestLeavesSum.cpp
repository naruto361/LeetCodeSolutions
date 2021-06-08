void answer(int &x,TreeNode *root)
    {
        if(root==NULL) return ;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int currsum=0;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode *temp=q.front();
                q.pop();
                currsum+=temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            x=currsum;
        }
    }
    int deepestLeavesSum(TreeNode* root) {
        if(root==NULL) return 0;
        int x=0;
        answer(x,root);
        return x;
    }
