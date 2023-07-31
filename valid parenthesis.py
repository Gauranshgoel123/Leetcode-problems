lass Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack = []
        # return empty string '' when asked with invalid char
        paren_dict = {')': '(', '}':'{', ']': '['}
        for i in s:
            # if c is a right parenthesis
            if i in paren_dict:
                # return False if there is no matching left parenthesis
                if not stack or stack.pop() != paren_dict[i]:
                    return False
            # push left parenthesis(assume only left and right parenthesis is in s)
            else:
                stack.append(i)
        # To ensure all opening parenthesis was matched
        return not stack