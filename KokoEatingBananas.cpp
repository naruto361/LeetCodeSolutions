bool ok(vector<int>& piles, int h,int mid)
    {
        int ans=0;
        for(int i=0;i<piles.size();i++)
        {
            ans+=piles[i]/mid;
            if(piles[i]%mid!=0) ans++;
        }
        return ans<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=1e9,mid;
        while(low<high)
        {
            mid=low+(high-low)/2;
            if(ok(piles,h,mid))
            {
                high=mid;
            }
            else low=mid+1;
        }
        return low;
    }
