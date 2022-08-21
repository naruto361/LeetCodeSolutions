```cpp
class Solution {
public:
    void solve(TreeNode* root,int level,vector<int> &ans)
    {
        if(!root) return ;
        if(level==ans.size()) ans.push_back(root->val);
        if(root->right) solve(root->right,level+1,ans);
        if(root->left) solve(root->left,level+1,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        if(!root->left && !root->right) return {root->val};
        vector<int> ans;
        solve(root,0,ans);
        return ans;
    }
};
```

```cpp
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
```
