class Solution {
    public boolean wordPattern(String pattern, String words) {
        String[] t=words.split(" ",-1);
        if(pattern.length()!=t.length){
            return false;
        }
        HashMap<Character, String> a = new HashMap<>();
        for(int i=0;i<pattern.length();i++){
            if(a.containsKey(pattern.charAt(i))){
                String res=a.get(pattern.charAt(i));
                if(!res.equals(t[i])){
                    return false;
                }
            }
            else if(a.containsValue(t[i])){
                return false;
            }
            else{
                a.put(pattern.charAt(i),t[i]);
            }
        }
        return true;
        
    }
}
