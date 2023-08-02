class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        S=[]
        
        for i in range(0,len(nums)):
            count=0
            for j in range(0,len(nums)):
                if i!=j and nums[j]<nums[i]:
                    count=count+1
                elif nums[j]==nums[i]:
                    continue
            S.append(count)
        return S
                