class Solution {
public:
    double average(vector<int>& salary) {
        double n=salary.size()-2;
        sort(salary.begin(),salary.end());
        double sum=0;
        for(int i=1;i<n+1;i++)
            sum+=salary[i];
        return double(sum/n);
            
    }
};
