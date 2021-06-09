unordered_map<int,int> mp;
    int maxcount=0;
    int dfs(TreeNode* root)
    {
        if(root==NULL) return 0;
        int s= dfs(root->left) + root->val +dfs(root->right);
        cout<<s<<" ";
        mp[s]++;
        if(mp[s]>maxcount) maxcount=mp[s];
        return s;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        vector<int> ans;
        for(auto &i:mp)
        {
            if(i.second==maxcount) ans.push_back(i.first);
        }
        return ans;
    }
