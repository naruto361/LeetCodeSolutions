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

********************************************
M E T H O D  2
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        for(int i=0;i<numRows;i++)
        {
            if(i==0)
            {
                v.push_back({1});
            }
            else if(i==1)
            {
                v.push_back({1,1});
            }
            else
            {
                vector<int> t;
                t.push_back(1);
                for(int j=1;j<i;j++)
                {
                    t.push_back(v[i-1][j-1]+v[i-1][j]);
                    
                }
                t.push_back(1);
                v.push_back(t);
                t.clear();
            }
        }
        return v;
    }
    
