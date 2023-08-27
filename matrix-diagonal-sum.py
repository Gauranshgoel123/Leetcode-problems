class Solution(object):
    def diagonalSum(self, mat):
        """
        :type mat: List[List[int]]
        :rtype: int
        """
        a=0
        b=len(mat)-1
        summ=0
        for i in range(len(mat)):
            summ=summ+mat[i][a]
            summ=summ+mat[i][b]
            a+=1
            b-=1 
        """now summ contains extra middle element whihc needs to be subtracted"""
        
        if len(mat) % 2 == 0:
            return summ  
            
        else:
            summ=summ-mat[len(mat)//2][len(mat)//2]
            return summ   