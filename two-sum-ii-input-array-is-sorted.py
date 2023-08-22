class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        leftcurr = 0                      
        rightcurr = len(numbers) - 1          
        
        while leftcurr < rightcurr:
            summ=numbers[leftcurr] + numbers[rightcurr]
            if summ > target:
                rightcurr = rightcurr - 1
            elif summ < target:
                leftcurr = leftcurr + 1
            elif summ==target:
                return [leftcurr+1,rightcurr+1]

        