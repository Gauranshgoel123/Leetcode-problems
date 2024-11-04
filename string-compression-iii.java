class Solution {
    public String compressedString(String word) {
        StringBuilder ans= new StringBuilder("");
        int pos=0;
        while(pos<word.length()){
            int count=0;
            char curr=word.charAt(pos);
            while(pos<word.length() && count<9 && word.charAt(pos)==curr){
                count++;
                pos++;
            }
            ans.append(count).append(curr);
        }
        return ans.toString();
    }
}
