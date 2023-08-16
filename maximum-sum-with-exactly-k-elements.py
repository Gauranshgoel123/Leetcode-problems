class Solution(object):
    def maximizeSum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        summ=0
        nums.sort()
        for i in range(0,k):
            m=max(nums)
            nums.pop()
            nums.append(m+1)
            summ=summ+m
        return summ