class Solution(object):
    def checkIfExist(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """
        a=len(arr)
        for i in range(0,a):
            for j in range(i+1,a):
                if (arr[i]==2*arr[j]) or (arr[j]==2*arr[i]):
                    return True
