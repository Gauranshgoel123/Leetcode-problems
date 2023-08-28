class Solution(object):
    def findDifference(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[List[int]]
        """
        s1=set(nums1)
        s2=set(nums2)
        nums1=list(s1)
        nums2=list(s2)
        ans1,ans2,answer=[],[],[]
        for i in nums1:
            if i not in s2:
                ans1.append(i)
        for i in nums2:
            if i not in s1:
                ans2.append(i)
        answer.append(ans1)
        answer.append(ans2)
        return answer