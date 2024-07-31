class Solution {
    public String longestCommonPrefix(String strs[]) {
        if(strs == null || strs.length == 0){
            return "";
        }

        Arrays.sort (strs);

        String first = strs[0];
        String last = strs[strs.length -1];

        StringBuilder ans = new StringBuilder();

        for(int i =0; i< Math.min(first.length(), last.length()); i++){
            if(first.charAt(i)!=last.charAt(i)){
                break;
            }
            ans.append(first.charAt(i));
        }
        return ans.toString();}}
