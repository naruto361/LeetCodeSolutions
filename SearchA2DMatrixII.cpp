class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size() , n=matrix[0].size();
        // for(int i=0;i<m;i++)
        // {
        //     if(matrix[i][0]>target) return false;
        //     if(matrix[i][n-1]<target) continue;
        //     if(binary_search(matrix[i].begin(),matrix[i].end(),target)) 
        //         return true;
        // }
        // return false;
        int i=0,j=n-1;
        while(i<m && j>=0)
        {
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]>target) j--;
            else i++;
        }
        return false;
    }
};
