    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        for(int i  = 0  ; i < mat.size() ; i++)
        {
            int l = 0;
            int r = mat[0].size() -1;
            while( l < r )
            {
                int mid = ( l + r )/2;
                if( mat[i][mid] > mat[i][mid + 1])
                    r = mid;
                else
                    l = mid + 1;
            }
            bool top = true;
            bool bottom = true;
            if( i != 0 )
            {
                if( mat[i -1][l] > mat[i][l]){ top = false;}
            }
            if( i != mat.size() - 1)
            {
                if( mat[i+1][l] > mat[i][l]){ bottom = false;}
            }
            if( top && bottom ) return {i,l};
        }
        return {0,0};
    }
