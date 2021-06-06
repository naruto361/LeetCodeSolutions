unordered_map<int,int> mp;
    int maxi=-1;
    void ok(TreeNode* root)
    {
        if(root==NULL) return ;
        ok(root->left);
        
        mp[root->val]++;
        maxi=max(maxi,mp[root->val]);
        ok(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> v;
        ok(root);
        for(auto i:mp)
        {
            if(i.second==maxi) v.push_back(i.first);
        }
        return v;
    }
