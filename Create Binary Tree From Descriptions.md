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
    TreeNode* createBinaryTree(vector<vector<int>>& arr) {
        map<int,TreeNode*> tree;
        map<int,int> indegree;
        for(auto &i:arr)
        {
            TreeNode *par,*child;
            if(tree.find(i[0])==tree.end())
                par=new TreeNode(i[0]);
            else par=tree[i[0]];
            
            if(tree.find(i[1])==tree.end())
                child=new TreeNode(i[1]);
            else child=tree[i[1]];
            
            indegree[i[1]]++;
            
            if(i[2]==1) par->left=child;
            else par->right=child;
            
            tree[i[0]]=par;
            tree[i[1]]=child;
        }
        for(auto &i:tree)
        {
            if(indegree[i.first]==0) return tree[i.first];
        }
        return NULL;
    }
};
```
