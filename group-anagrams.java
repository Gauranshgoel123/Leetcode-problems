class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String,List<String>> ans=new HashMap<>();
        for(String s:strs){
            char[] c=s.toCharArray();
            Arrays.sort(c);
            String key=new String(c);
            if(!ans.containsKey(key)){
                ans.put(key,new ArrayList<>());
            }
            ans.get(key).add(s);
        }
        return new ArrayList<>(ans.values());
    }
}



// class Solution {
//     public List<List<String>> groupAnagrams(String[] strs) {
//         Map<String,List<String>> ans=new HashMap<>();
//         for(String s:strs){
//             int[] count=new int[26];
//             for(char c:s.toCharArray()){
//                 count[c-'a']++;
//             }
//             StringBuilder sb=new StringBuilder();
//             for(int num:count){
//                 sb.append(num).append("#");
//             }
//             String key=sb.toString();
//             if(!ans.containsKey(key)){
//                 ans.put(key,new ArrayList<>());
//             }
//             ans.get(key).add(s);
//         }
//         return new ArrayList<>(ans.values());
//     }
// }
