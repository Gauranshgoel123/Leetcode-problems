class Solution {
    public boolean checkTwoChessboards(String coordinate1, String coordinate2) {
        return check(coordinate1)==check(coordinate2);
    }
    public int check(String coordinate){
        int col=coordinate.charAt(0)-'a'+1;
        int row=Integer.parseInt(String.valueOf(coordinate.charAt(1)));
        return (row+col)%2;
    }
}
