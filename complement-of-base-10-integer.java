class Solution {
    public int bitwiseComplement(int n) {
        if(n==0) return 1;
        if(n==1) return 0;
        int len=Integer.toBinaryString(n).length();
        int mask=(1<<len)-1;
        return n^mask;
    }
}
