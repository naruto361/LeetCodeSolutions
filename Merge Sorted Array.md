## METHOD 1 : NO EXTRA SPACE
```cpp
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1 , j=n-1;
        int k=m+n-1;
        while(i>=0 && j>=0)
        {
            if(nums1[i]>=nums2[j])
            {
                nums1[k--]=nums1[i--];
            }
            else nums1[k--]=nums2[j--];
        }
        while(j>=0) nums1[k--]=nums2[j--];
    }
};
```

## METHOD 2 : EXTRA SPACE
```cpp
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return ;
        if(m==0)
        {
            nums1=nums2;
            return;
        }
        int i=0,j=0;
        vector<int> v;
        while(i<m && j<n && v.size()<nums1.size())
        {
            if(nums1[i]<=nums2[j])
            {
                v.push_back(nums1[i++]);
            }
            else v.push_back(nums2[j++]);
        }
        while(i<m) v.push_back(nums1[i++]);
        while(j<n) v.push_back(nums2[j++]);
        nums1=v;
        return ;
    }
};
```
