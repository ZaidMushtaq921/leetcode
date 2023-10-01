class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int k = nums1.size();
        float median;
        for(int i=0;i<nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
            k++;
        }
        sort(nums1.begin(),nums1.end());
        int n = nums1.size();
        if(n%2==0)
        {
            median=float(nums1[n/2] + nums1[(n/2)-1])/2;
        }
        else
        {
            median=nums1[n/2];
        }
        return median;
    }
};