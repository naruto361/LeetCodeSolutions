class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int m=matrix.size(),n=matrix[0].size();
        if(m==0 || n==0) return 0;
        int i=0;
        while(i<m)
        {
            if(matrix[i][0]>target) return 0;
            if(matrix[i][n-1]<target) {i++;continue;}
            if(binary_search(matrix[i].begin(),matrix[i].end(),target)==1) return 1;
            i++;
            if(i>=n) break;
        }
        return 0; 
    }
};
