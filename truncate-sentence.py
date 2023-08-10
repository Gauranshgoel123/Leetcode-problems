class Solution(object):
    def truncateSentence(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        ss=s.split(" ")
        """now ss is a list containing all words as seperate elements"""
        """join converts list return type to string """
        """ " " is needed to provide gap between each word in output"""
        return " ".join(ss[0:k])