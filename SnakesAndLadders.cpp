int snakesAndLadders(vector<vector<int>>& board) {
        if(board[0][0]!=-1) return -1;
        int n=board.size();
        vector<int> moves(n*n +1,-1);
        int k=n*n;
        for(int i=0;i<n;i++)
        {
            if((i%2==0 && n%2==0) || (i%2==1 && n%2==1))
            {
                for(int j=0;j<n;j++) moves[k--]=board[i][j];
            }
            else
            {
                for(int j=n-1;j>=0;j--) moves[k--]=board[i][j];
            }
        }
        vector<bool> vis(n*n +1,0);
        queue<pair<int,int>> q;
        // vertex and distance
        vis[1]=1;
        q.push({1,0});
        while(!q.empty())
        {
            int f=q.front().first;
            int s=q.front().second;
            cout<<f<<" "<<s<<endl;
            if(f == n*n) return q.front().second;
            q.pop();
            
            for(int i=f+1;i<=f+6 && i<=n*n ;i++)
            {
                if(vis[i]==0)
                {
                    vis[i]=1;
                    int dd=s+1;
                    int vv=i;
                    if(moves[i]!=-1) vv=moves[i];
                    q.push({vv,dd});
                }
            }
        }
        return q.front().second;
    }
