void dfs(int i,int j,vector<vector<char>> &board)
    {
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]!='O') return;
        board[i][j]='P';
        dfs(i+1,j,board);
        dfs(i,j+1,board);
        dfs(i-1,j,board);
        dfs(i,j-1,board);
    }
    void solve(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++) dfs(i,0,board);
        for(int i=1;i<board[0].size();i++) dfs(0,i,board);
        for(int i=1;i<board[0].size();i++) dfs(board.size()-1,i,board);
        for(int i=1;i<board.size()-1;i++) dfs(i,board[0].size()-1,board);
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='P') board[i][j]='O';
                else board[i][j]='X';
            }
        }
    }
