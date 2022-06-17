[Serialize and Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/)
```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root) return "# ";
        string res;
        queue<TreeNode*> q;
        q.push(root);
        res += (to_string(root->val)+' ');
        while(!q.empty())
        {
            int n=q.size();
            while(n--)
            {
                TreeNode* k=q.front();
                q.pop();
                if(k->left) {q.push(k->left);res += (to_string(k->left->val)+' ');}
                else res += ("# ");
                if(k->right) {q.push(k->right);res += (to_string(k->right->val)+' ');}
                else res += ("# ");
            }
        }
        return res;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<int> v;
        int temp=0;
        bool neg=false;
        for(char &c:data)
        {
            if(c=='#') temp=1e9;
            else if(c==' ') 
            {
                if(neg) temp*=-1;
                v.push_back(temp);
                //cout<<temp<<' ';
                neg=false;
                temp=0;
            }
            else if(c=='-') neg=true;
            else
            {
                temp=temp*10 + c-'0';
            }
        }
        if(v.size()==1)
        {
            if(v[0]==1e9) return NULL;
            return new TreeNode(v[0]);
        }
        int idx=0;
        TreeNode* root=new TreeNode(v[idx++]);
        queue<TreeNode*> q;
        q.push(root);
        while(idx<v.size())
        {
            TreeNode* k=q.front();
            q.pop();
            if(idx<v.size() && v[idx]!=1e9)
            {
                k->left=new TreeNode(v[idx]);
                q.push(k->left);
            }
            idx++;
            if(idx<v.size() && v[idx]!=1e9)
            {
                k->right=new TreeNode(v[idx]);
                q.push(k->right);
            }
            idx++;
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
````
