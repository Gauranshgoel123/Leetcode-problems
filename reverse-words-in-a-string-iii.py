class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        words=s.split()
        rev=(word[::-1] for word in words)
        return " ".join(rev)