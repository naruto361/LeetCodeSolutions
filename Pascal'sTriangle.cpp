class Solution {
public:
    int binomialCoeff(int n, int k) 
{ 
    int res = 1; 
    if (k > n - k) 
    k = n - k; 
    for (int i = 0; i < k; ++i) 
    { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
      
    return res; 
} 
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        if(numRows==0) return v;
        for(int i=0;i<numRows;i++)
        {
            vector<int> p;
            for(int j=0;j<=i;j++)
            {
                p.push_back(binomialCoeff(i,j));
            }
            
            v.push_back(p);
            p.clear();
        }
        return v;
    }
};
