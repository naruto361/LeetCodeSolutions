class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int arr[n1+n2];
        int i = 0;
    int j = 0;
    int k = 0;
    while (i < n1 && j < n2)
    {
        if (nums1[i] <= nums2[j])
        {
            arr[k] = nums1[i];
            i++;
        }
        else
        {
            arr[k] = nums2[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = nums1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = nums2[j];
        j++;
        k++;
    }
        if((n1+n2)%2==0)
        return (double)(arr[(n1+n2)/2]+arr[(n1+n2)/2 -1])/2;
        else
            return arr[(n1+n2)/2];
    }
};
