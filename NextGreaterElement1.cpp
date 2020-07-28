class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int i=0;i<nums1.size();i++)
        {   int a=1;
            int k=nums1[i];
            int p;
            for(int j=0;j<nums2.size();j++)
            {
                if(nums2[j]==k) {p=j; break;}
            }
            for(int x=p+1;x<nums2.size();x++)
            {
                if(nums2[x]>nums2[p]) 
                {a=0;v.push_back(nums2[x]);break;}
            }
         if(a==1)
             v.push_back(-1);
            
        }
        return v;
    }
};
