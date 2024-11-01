class Solution {
    public String makeFancyString(String s) {
        StringBuilder ans=new StringBuilder();
        int count=0;
        char prev=s.charAt(0);
        for(char curr:s.toCharArray()){
            if(curr==prev){
                count++;                
            }
            else{
                count=1;
            }
            if(count<3){
                ans.append(curr);
                prev=curr;
            }
        }
        return ans.toString();
    }
}
