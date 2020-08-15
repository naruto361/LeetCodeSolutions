class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int a=*max_element(candies.begin(),candies.end());
        int b=*min_element(candies.begin(),candies.end());
        set <int> s;
        for(int i=0;i<candies.size();i++)
        {
            s.insert(candies[i]);
        }
        int k=s.size();
        int x=candies.size()/2;
        if(k<x)
            return k;
        else return x;
    }
};
