class Solution(object):
    def sumOfSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        summ = 0
        for i in range(0,n):
            if n % (i+1) == 0:
                summ = summ + (nums[i]*nums[i])
        return summ