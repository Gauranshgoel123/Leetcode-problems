class Solution(object):
    def maxProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        A=max(nums)
        B=nums[-2]
        C=(A-1)*(B-1)
        return C