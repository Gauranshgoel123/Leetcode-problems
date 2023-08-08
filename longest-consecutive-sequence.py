class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        nums = sorted(set(nums))
        
        cur_max = 0
        cur_count = 0
        prev = None
        for i in nums:
            if prev is not None:
                if prev+1 == i:
                    cur_count += 1
                else:
                    cur_max = max(cur_max, cur_count)
                    cur_count = 1
            else:
                cur_count += 1
            prev = i
        return max(cur_max, cur_count)
        