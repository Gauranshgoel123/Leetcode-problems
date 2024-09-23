class Solution {
    public boolean reportSpam(String[] message, String[] bannedWords) {
        Set<String> map2=new HashSet<>();
        for(String s:bannedWords){
            map2.add(s);
        }
        int count=0;
        for(String word:message){
            if(map2.contains(word)) count++;
            if(count>=2) return true;
        }
        return false;
    }
}
