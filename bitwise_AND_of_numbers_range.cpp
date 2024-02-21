//first right shift both "left" and "right" and keep counting the number of times 
//it is beign right shifted.
//do this until "left" is not equal to "right"
// if "left" == " right" then break loop and return left << count
// which is "left"  leftshifted count number of times
// this will give the desried result
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int cnt = 0;
        while (left != right) {
            left >>= 1;
            right >>= 1;
            cnt++;
        }
        return (left << cnt);
    }
};
