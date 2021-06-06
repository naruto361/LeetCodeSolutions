bool isValidSudoku(vector<vector<char>>& board) {
  // check rows
        for(int i=0;i<9;i++)
        {
            set<char> s;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    if(s.find(board[i][j])!=s.end()) return 0;
                    s.insert(board[i][j]);
                }
            }
        }
  // check columns
        for(int i=0;i<9;i++)
        {
            set<char> s;
            for(int j=0;j<9;j++)
            {
                if(board[j][i]!='.')
                {
                    if(s.find(board[j][i])!=s.end()) return 0;
                    s.insert(board[j][i]);
                }
            }
        }
  // checking 3X3 boxes
        for(int i=0;i<9;i+=3)
        {
            for(int j=0;j<9;j+=3)
            {
                set<char> s;
                for(int k=i;k<i+3;k++)
                {
                    for(int m=j;m<j+3;m++)
                    {
                        if(board[k][m]!='.')
                        {
                            if(s.find(board[k][m])!=s.end()) return 0;
                            s.insert(board[k][m]);
                        }
                    }
                }
            }
        }
        return 1;
    }
