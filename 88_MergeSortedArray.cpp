/*
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:
You may assume that nums1 has enough space (size that is greater or equal to m + n) to
 hold additional elements from nums2. The number of elements 
 initialized in nums1 and nums2 are m and n respectively.
*/

 class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k = m+n-1;
        n = n-1; m = m-1;
        while(m >= 0 && n >= 0){
            if(nums1[m] > nums2[n]) nums1[k--] = nums1[m--];
            else nums1[k--] = nums2[n--];
        }
        while(n >= 0)   nums1[k--] = nums2[n--];
    }
};
