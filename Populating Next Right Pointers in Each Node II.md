```cpp
Node* connect(Node* root) {
        if(!root) return NULL;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            Node* prev=new Node(-1);
            while(n--)
            {
                Node* k=q.front();
                q.pop();
                prev->next=k;
                prev=k;
                if(k->left) q.push(k->left);
                if(k->right) q.push(k->right);
                
            }
            prev->next=NULL;
        }
        return root;
    }
```
