## [Two Sum IV - Input is a BST](https://leetcode.com/problems/two-sum-iv-input-is-a-bst/)
```cpp
map<int,int> mp;
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL) return 0;
        if(mp.find(k-root->val)!=mp.end()) return 1;
        mp[root->val]++;
        return findTarget(root->left,k) || findTarget(root->right,k);
    }
```
