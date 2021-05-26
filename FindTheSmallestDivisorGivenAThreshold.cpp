bool ok(vector<int>& nums, int threshold,int mid)
    {
        int ans=0;
        for(int &i:nums)
        {
            ans+=i/mid;
            if(i%mid!=0) ans++;
            if(ans>threshold) return 0;
        }
        return ans<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,h=1e6;
        while(l<h)
        {
            int mid=l+(h-l)/2;
            if(ok(nums,threshold,mid)) h=mid;
            else l=mid+1;
        }
        return l;
    }
