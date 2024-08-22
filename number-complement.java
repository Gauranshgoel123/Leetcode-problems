class Solution {
    public int findComplement(int num) {
        if(num==0) return 1;
        if(num==1) return 0;
        int len=Integer.toBinaryString(num).length();
        int mask=(1<<len)-1;
        return num^mask;
    }
}
//1<<len is same as 2 to the power of len
// STEPS
// The first thing that should come to your mind when you want the opposite of any bit is the great XOR operation. Remember the simple rule of XOR. Whenever there is a bit say 1 ^ 0 , 0 ^ 1 then you will always get 1. Rest everytime you get 0.
// Next, you need to figure the bit mask to get the result. Lets take the example of the input - 101 and output 010.
// so if you XOR these two number then you get your mask required. Example - (101) ^ (010) = 111 which is 7.
// So, if you do 101 ^ 111 = 010 and thats the answer or the output we want! So this is how you got your ** mask**
// Now that you have the mask you just have to convert this logic into meaningful code so that it works for any input.
// one simple formula is. (2Power3)- 1. This will give you 8 AND THEN -1 WILL GIVE YOU 7. Notice that 3 is the number of bits in the number.
// Just do 101 ^ (2Power3)-1 and thats your output answer.
