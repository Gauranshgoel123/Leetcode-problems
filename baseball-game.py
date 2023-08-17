class Solution(object):
    def calPoints(self, ops):
        """
        :type operations: List[str]
        :rtype: int
        """
        rec=[]
        for i in range(0,len(ops)):
            if ops[i] == "C":
                rec.pop()
            elif ops[i] == "D":
                k=2*int(rec[-1])
                rec.append(k)
            elif ops[i] == "+":
                k=int(rec[-1])+int(rec[-2])
                rec.append(k)
            else:
                rec.append(int(ops[i]))

        summ=0
        for i in range(0,len(rec)):
            summ=summ+rec[i]
        return summ
