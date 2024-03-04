class Solution {
    public int findContentChildren(int[] g, int[] s) {
        int i=g.length-1;
        int count=0;
        int j=s.length-1;
        Arrays.sort(g);
        Arrays.sort(s);
        while(i>=0 && j>=0){
            if(s[j] >= g[i]){
                count++;
                i--;
                j--;
            }
            else{
                i--;
            }
        }
        return count;
    }
}
