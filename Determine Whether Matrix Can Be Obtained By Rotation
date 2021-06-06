bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int N = mat[0].size();
        for(int k=0; k<4; k++){
            for (int i = 0; i < N / 2; i++) {
                for (int j = i; j < N - i - 1; j++) {
                 int temp = mat[i][j];
                 mat[i][j] = mat[N - 1 - j][i];
                 mat[N - 1 - j][i] = mat[N - 1 - i][N - 1 - j];
                 mat[N - 1 - i][N - 1 - j] = mat[j][N - 1 - i];
                 mat[j][N - 1 - i] = temp;
                }
            }
            if(mat==target) return 1;
        }
        return 0;
    }
