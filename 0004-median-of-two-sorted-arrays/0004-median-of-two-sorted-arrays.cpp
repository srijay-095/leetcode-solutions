class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n2;i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        if(nums1.size()%2==1)
        {
            return nums1[n/2];
        }
         double ans=1.0*((nums1[n/2-1])+nums1[n/2])/2;
        return ans;
    }
};