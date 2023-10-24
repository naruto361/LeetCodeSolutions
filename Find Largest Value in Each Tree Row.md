```cpp
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            int maxi=INT_MIN;
            while(n--)
            {
                TreeNode* k=q.front();
                maxi=max(maxi,k->val);
                q.pop();
                if(k->left) q.push(k->left);
                if(k->right) q.push(k->right);
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};
```
