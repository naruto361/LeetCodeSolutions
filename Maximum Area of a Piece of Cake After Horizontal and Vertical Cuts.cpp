int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int m=1e9+7;
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        int one=0,two=0;
        for(int i=1;i<horizontalCuts.size();i++)
        {
            one=max(one,horizontalCuts[i]-horizontalCuts[i-1]);
        }
        one=max(one,max(horizontalCuts[0],h-horizontalCuts.back()));
        for(int i=1;i<verticalCuts.size();i++)
        {
            two=max(two,verticalCuts[i]-verticalCuts[i-1]);
        }
        two=max(two,max(verticalCuts[0],w-verticalCuts.back())); 
        long k=((long)one%m * (long)two%m)%m;
        return (int)k;
    }
