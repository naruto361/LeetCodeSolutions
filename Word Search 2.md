```cpp
class Solution {
public:
    struct Node{
        Node* children[26];
        string word;
    };
    void buildTree(string s,Node* root)
    {
        Node* p=root;
        for(char &c:s)
        {
            if(!p->children[c-'a']) p->children[c-'a']=new Node();
            p=p->children[c-'a'];
        }
        p->word=s;
    }
    void dfs(vector<vector<char>> &board,int i,int j,vector<string> &res,Node* p)
    {
        char c=board[i][j];
        if(c=='*' || !p->children[c-'a']) return ;
        p=p->children[c-'a'];
        if(p->word.length()>0)
        {
            res.push_back(p->word);
            p->word.clear();
        }
        board[i][j]='*';
        if(i-1>=0) dfs(board,i-1,j,res,p);
        if(j-1>=0) dfs(board,i,j-1,res,p);
        if(i+1<board.size()) dfs(board,i+1,j,res,p);
        if(j+1<board[0].size()) dfs(board,i,j+1,res,p);
        board[i][j]=c;
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Node* root=new Node();
        for(auto &s:words) buildTree(s,root);
        vector<string> res;
        int m=board.size() , n=board[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++) dfs(board,i,j,res,root);
        }
        return res;
    }
};
```
