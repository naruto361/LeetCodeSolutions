class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int ans=0;
        if(n==0) return 1;
        
        int k=flowerbed.size();
        if(k==1)
        {
            if(flowerbed[0]==0) return 1;
            else return 0;
        }
        if(flowerbed[0]==0 && flowerbed[1]==0) {flowerbed[0]=1;ans++;}
        if(flowerbed[k-1]==0 && flowerbed[k-2]==0) {
            flowerbed[k-1]=1;ans++;
        }
        for(int i=1;i<k-1;i++)
        {
            if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0)
            {
                flowerbed[i]=1;ans++;
            }
        }
        if(ans>=n) return 1;
        return 0;
    }
};
