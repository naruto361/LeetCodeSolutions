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
    TreeNode*help(vector<int>& nums, int start , int last){
        if(start == last ){
            return new TreeNode(nums[start]);
        }
        while(start<last){
            int mid = start+(last-start)/2;
            TreeNode* t = new TreeNode(nums[mid]);
            t->right = help(nums, mid+1, last);
            t->left = help(nums, start, mid-1);
            return t;
        }
       return NULL;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(!nums.size()) return NULL;
        return help(nums,0, nums.size()-1);
    }
};
