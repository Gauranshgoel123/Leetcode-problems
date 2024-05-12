class Solution {
    public int[][] largestLocal(int[][] grid) {
        int n=grid.length;
        int[][] ans=new int[n-2][n-2];
        for(int row=0;row<n-2;row++){
            for(int col=0;col<n-2;col++){
                ans[row][col]=findmax(grid,row,col);
            }
        }
        return ans;
    }
    public int findmax(int[][] grid, int row, int col){
        int max=0;
        for(int i=row;i<row+3;i++){
            for(int j=col;j<col+3;j++){
                max=Math.max(max,grid[i][j]);
            }
        }
        return max;
    }
}
