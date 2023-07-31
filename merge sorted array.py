class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        nums1size=len(nums1)
        while nums1size>m:
            nums1.pop()
            nums1size=nums1size-1

        for i in nums2:
            nums1.append(i)
        
        """now nums1 is merged and need to be sorted in ascending order!"""
        nums1.sort()
        print(nums1)
