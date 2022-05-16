[Word Search](https://leetcode.com/problems/word-search/)
```cpp
class Solution {
private:
    vector<int> dx={0,1,0,-1};
    vector<int> dy={1,0,-1,0};
    bool isValid(int i,int j,vector<vector<char>> &board,int idx,string &word)
    {
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() ||
          word[idx]!=board[i][j]) return false;
        return true;
    }
    bool solve(vector<vector<char>> &board,string &word,int i,int j,int idx)
    {
        if(idx==word.length()) return true;
        if(isValid(i,j,board,idx,word))
        {
            char c=board[i][j];
            board[i][j]='*';
            for(int k=0;k<4;k++)
            {
                if(solve(board,word,i+dx[k],j+dy[k],idx+1)) return true;
            }
            board[i][j]=c;
        }
            return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size() , n=board[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==word[0])
                {
                    if(solve(board,word,i,j,0)) return true;
                }
            }
        }
        return false;
    }
};
```
