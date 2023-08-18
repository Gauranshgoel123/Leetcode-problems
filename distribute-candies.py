class Solution(object):
    def distributeCandies(self, candyType):
        """
        :type candyType: List[int]
        :rtype: int
        """
        if candyType.count(candyType[0]) == len(candyType):
            return 1

        res=[]
        maxcandy=len(candyType)/2
        candyType=list(set(candyType))
        
        """now list only conatins unique elements"""
        typee = len(candyType)
        if typee>=maxcandy:
            return maxcandy
        else:
            return typee
        