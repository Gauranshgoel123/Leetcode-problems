// with inbuilt function
//   class Solution {
//     public String toLowerCase(String s) {
//         return s.toLowerCase();
//     }
// }
//without in-built function
class Solution {
    public String toLowerCase(String s) {
        char[] arr= s.toCharArray();
        for(int i=0;i<arr.length;i++){
            if('A' <= arr[i] && arr[i] <= 'Z'){
                arr[i] = (char) (arr[i]-'A'+'a');
            }
        }
        return new String(arr);
    }
}
