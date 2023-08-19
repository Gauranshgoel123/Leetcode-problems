class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums[:]=sorted(set(nums))
        """nums =  doesn't replace elements in the original list.
           nums[:] = replaces element in place"""
        return len(nums)