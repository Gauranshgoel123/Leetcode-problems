class Solution {
    public int countConsistentStrings(String allowed, String[] words) {
        boolean[] s=new boolean[26];
        for(char c:allowed.toCharArray()){
            s[c-'a']=true;
        }
        int count=0;
        for(String w:words){
            if(check(w,s)){
                count++;
            }
        }
        return count;
    }
    private boolean check(String w,boolean[] s){
        for(int i=0;i<w.length();i++){
            if(!s[w.charAt(i)-'a']){
                return false;
            }
        }
        return true;
    }
}


//OR LESS OPTIMIZED


// class Solution {
//     public int countConsistentStrings(String allowed, String[] words) {
//         Set<Character> set=new HashSet<>();
//         for(int i=0;i<allowed.length();i++){
//             set.add(allowed.charAt(i));
//         }
//         int count=0;
//         for(int i=0;i<words.length;i++){
//             int flag=1;
//             for(int j=0;j<words[i].length();j++){
//                 if(!set.contains(words[i].charAt(j))){
//                     flag=0;
//                     break;
//                 }
//             }
//             count+=flag;
//         }
//         return count;
//     }
// }
