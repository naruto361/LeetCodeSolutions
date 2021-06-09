bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int t=0;
        while(!q.empty())
        {
            int n=q.size();
            int prev=0;
            for(int i=0;i<n;i++)
            {
                TreeNode* k=q.front();
                q.pop();
                if(t%2==0 && k->val%2==0) return 0;
                if(t&1 && k->val&1) return 0;
                if(t%2==0)
                {
                    if(k->val<=prev) return 0;
                    prev=k->val;
                }
                else
                {
                    if(prev==0) prev=k->val;
                    else
                    {
                        if(k->val>=prev) return 0;
                        prev=k->val;
                    }
                }
                if(k->left) q.push(k->left);
                if(k->right) q.push(k->right);
            }
            t++;
        }
        
        return 1;
    }
