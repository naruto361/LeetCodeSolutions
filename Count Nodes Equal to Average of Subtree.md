[Count Nodes Equal to Average of Subtree](https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/)
```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=0;
    // sum and count
    pair<int,int> solve(TreeNode* root)
    {
        if(!root) return {0,0};
        pair<int,int> p1=solve(root->left);
        pair<int,int> p2=solve(root->right);
        int sum=p1.first+p2.first;
        int cnt=p1.second+p2.second++;
        sum+=root->val;
        ++cnt;
        if(sum/cnt == root->val) ++ans;
        return {sum,cnt};
    }
    int averageOfSubtree(TreeNode* root) {
        if(!root) return 0;
        solve(root);
        return ans;
    }
};
```
