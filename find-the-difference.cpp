//SOME OF THE OPTIMIZED APPROACHS: 
//1.XOR OPERATION (GIVEN BELOW)
//2.SUBTRACT THE SUM OF ASCII VALUES
// class Solution {
// public:
// All letters persent in s is present in t.
// There is just one extra letter in t.
// Every character can be represented as an ASCII .
// ASCII value of the extra letter in t is derived as follows:
// Sum of all ASCII values of charcters in s -> sSum
// Sum of all ASCII values of charcters in t -> tSum
// Return the difference (tSum-sSum)
//     char findTheDifference(string s, string t) {
//         for(int i=0;i<s.size();i++){
//             t[i+1] = t[i] - s[i] + t[i+1];
//             //passing the diff(t[i]-s[i]) to t[i+1] i.e next element on each iteration
//         }
//         return t[t.size()-1]; //the difference will be carried over to the last element 
//     }
// };
//BEST APPROACH - USING XOR OPERATION BITWISE MANIPULATION
class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans=0;
        for(auto x: s){
            ans^=x;
        }
         for(auto x: t){
            ans^=x;
        }

        return ans;
    }
};