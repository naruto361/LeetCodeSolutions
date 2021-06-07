bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            bool idx1=false,idx2=false;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* k=q.front();
                q.pop();
                if(k->val==x) idx1=true;
                else if(k->val==y) idx2=true;
              // if in same level return 1
                if(idx1 && idx2) return 1;
                if(k->left && k->right)
                {
                  // check for direct parent
                  // if return 0
                    if((k->left->val==x && k->right->val==y) ||
                      (k->left->val==y && k->right->val==x))
                        return 0;
                }
                if(k->left) q.push(k->left);
                if(k->right) q.push(k->right);
            }
        }
        return 0;
    }
