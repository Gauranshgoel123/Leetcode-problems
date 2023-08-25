class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        l=0
        r=len(height)-1
        max_area=0
        while l < r :
            area=(r-l)*min(height[r],height[l])
            max_area=max(max_area,area)
            if height[r] > height[l]:
                l=l+1
            else:
                r=r-1
        return max_area

