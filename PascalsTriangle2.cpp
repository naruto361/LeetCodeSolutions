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

/*************** M E T H O D  -  2 *******************/
 class Solution {
private:
     int solve(int n,int k)
     {
        long long res = 1; 
        if (k > n - k) 
        k = n - k; 
        for (int i = 0; i < k; ++i) 
        { 
            res *= (n - i); 
            res /= (i + 1); 
        } 
        return (int)res;
     }
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0) return {1};
        else if(rowIndex==1) return {1,1};
        vector<int> v;
        v.push_back(1);
        for(int i=1;i<=rowIndex/2;i++)
        {
            v.push_back(solve(rowIndex,i));
        }
        int l=v.size();
        if(rowIndex&1) v.push_back(v[l-1]);
        for(int i=l-2;i>=0;i--)
        {
            v.push_back(v[i]);
        }
        return v;
    }
};
