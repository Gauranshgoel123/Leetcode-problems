class Solution {
    public String stringHash(String s, int k) {
        int n=s.length();
        StringBuilder ans=new StringBuilder();
        for(int i=0;i<n;i+=k){
            String substr=s.substring(i,i+k);
            int sum=0;
            for(char c:substr.toCharArray()){
                sum=sum+(c-'a');
            }
            int rem=sum%26;
            char res=(char)('a'+rem);
            ans.append(res);
        }
        return ans.toString();
    }
}
