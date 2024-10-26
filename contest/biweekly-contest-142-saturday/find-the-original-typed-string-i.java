class Solution {
    public int possibleStringCount(String word) {
        int ans=1;
        int n=word.length();
        int i=0;
        while(i<n){
            int count=1;
            while(i+count<n && word.charAt(i)==word.charAt(i+count)){
                count++;
            }
            ans=ans+count-1;
            i=i+count;
        }
        return ans;
    }
}
