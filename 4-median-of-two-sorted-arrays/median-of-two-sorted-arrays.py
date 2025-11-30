class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        arr=nums1+nums2
        arr.sort()
        n=len(arr)
        mid=n/2
        if n%2==1:
            return (arr[mid])

        else :
            return (arr[mid-1]+arr[mid])/2.0