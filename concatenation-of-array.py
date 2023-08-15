class Solution(object):
    def getConcatenation(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        ans=[]
        for i in range(0,len(nums)):
            ans.append(nums[i])

        for i in range(0,len(nums)):
            ans.append(nums[i])
        return ans  