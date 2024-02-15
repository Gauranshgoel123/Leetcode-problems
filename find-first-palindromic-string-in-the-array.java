class Solution {
    public String firstPalindrome(String[] words) {
        
        for(int i =0;i<words.length;i++){
            boolean res = pal(words[i]);
            if(res){
                return words[i];
            }
        }
        return "";
    }

    public boolean pal(String p){
        int n = p.length()-1;
        int l =0;
        while(l<n){
            if(p.charAt(l)!=p.charAt(n)){
                return false;
            }
            l++;
            n--;
        }
        return true;
    }
}