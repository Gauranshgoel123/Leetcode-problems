class Solution {
    public boolean isIsomorphic(String s, String t) {
        if(s.length()!=t.length())  return false;
        int[] freqS = new int[127];
        int[] freqT = new int[127];

        for(int i=0;i<s.length();i++){
            if(freqS[s.charAt(i)]!=freqT[t.charAt(i)])   return false;
            freqS[s.charAt(i)]=i+1;
            freqT[t.charAt(i)]=i+1;
        }
        return true;
    }
}
