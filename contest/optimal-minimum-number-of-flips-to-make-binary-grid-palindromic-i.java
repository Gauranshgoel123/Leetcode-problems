class Solution {
    public int minFlips(int[][] grid) {
        int row=grid.length;
        int col=grid[0].length;
        if(col==1||row==1){
            return 0;
        }
        int rowflip=0;
        for(int i=0;i<row;i++){
            int j=0,k=col-1;
            while(j<k){
                if(grid[i][j]!=grid[i][k]){
                    rowflip++;
                }
                j++;
                k--;
            }
        }
        int colflip=0;
        for(int i=0;i<col;i++){
            int j=0,k=row-1;
            while(j<k){
                if(grid[j][i]!=grid[k][i]){
                    colflip++;
                }
                j++;
                k--;
            }
        }
        return Math.min(rowflip,colflip);
    }
}
