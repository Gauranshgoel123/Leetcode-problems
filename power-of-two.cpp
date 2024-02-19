//Below is pyhton code but beats only 75% of runtime

//class Solution(object):
//     def isPowerOfTwo(self, n):
//         """
//         :type n: int
//         :rtype: bool
//         """
//         if n>0:
//             if n & (n-1)==0:
//                 return True
//         else:
//             return False

//for better runtime performance use the same bit manipulation approach to solve this program using C++ 
//Below code beats 100% users in run time
//The observation we can conclude is that the number which is a power of two has always compulsoryily 1 true bit.
// Now consider :-
// bit representation of 7  -> 0111
// bit representation of 8  -> 1000
// bitwise AND of 7 and 8 -> 0000
// we are gonna use this property for for all numbers which are powers of two
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return ((n&(n-1))==0);
    }
};
