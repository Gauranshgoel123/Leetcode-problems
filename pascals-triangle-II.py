class Solution(object):
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """

        output = []
        #loop just like pascal triangle problem 1
        for i in range(rowIndex+1):
            if(i == 0):
                prev = [1]
                output.append(prev)
            else:
                curr = [1]
                j = 1
                # Calculate for each of the next values...
                while(j < i):
                    # Inserting the addition of the prev arry two values...
                    curr.append(prev[j-1] + prev[j])
                    j+=1
                # Store the number 1...
                curr.append(1)
                # Store the value in the Output array...
                output.append(curr)
                # Set prev is equal to curr...
                prev = curr
        #now we return the last element of resultant output array
        return output[-1]