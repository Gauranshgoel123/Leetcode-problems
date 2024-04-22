class Solution {
    public String largestOddNumber(String num) {
        int n = num.length();
        for (int i = n - 1; i >= 0; i--) {
            int digit = num.charAt(i) - '0';
            if (digit % 2 != 0) {
                return num.substring(0, i + 1);
            }
        }
        return "";
    }
}

//recursion beats only 7%

// class Solution {
//     public String largestOddNumber(String num) {
//         return recursion(num,num.length());        
//     }
//     public static String recursion(String num,int i){
//         if(i<=0) return "";
//         if((num.charAt(i-1)-'0')%2==1)  return num;
//         return recursion(num.substring(0,i-1),i-1);
//     }
// }
