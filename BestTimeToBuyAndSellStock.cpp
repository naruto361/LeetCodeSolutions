   
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2) return 0;
        int mini=INT_MAX;
        int maxi=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<mini) mini=prices[i];
            else maxi=max(maxi,prices[i]-mini);
        }
        return maxi;
    }

 ********************************************************
 
     int maxProfit(vector<int>& prices) {
        if(prices.size()<2) return 0;
        int maxi=0,mini=prices[0];
        int ans=0;
        for(int i:prices)
        {
            ans=max(ans,i-mini);
            if(i<mini) mini=i;
        }
        return ans;
    }
