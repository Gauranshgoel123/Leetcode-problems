class Solution {
    public int getMaximumGold(int[][] grid) {
        int ans=0;
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[0].length;j++){
                if(grid[i][j]!=0){
                    ans=Math.max(ans,helper(grid,i,j,new boolean[grid.length][grid[0].length]));
                }
            }
        }
        return ans;
    }
    public int helper(int[][] grid,int row,int col,boolean[][] visited){
        if(row<0||col<0||row>=grid.length||col>=grid[0].length||visited[row][col]==true||grid[row][col]==0){
            return 0;
        }
        visited[row][col]=true;
        int totalGold = grid[row][col];
        int d = helper(grid,row + 1, col,visited);
        int u = helper(grid,row - 1, col,visited);
        int r = helper(grid,row, col + 1,visited);
        int l = helper(grid,row, col - 1,visited);      
        visited[row][col]=false;
        return totalGold+Math.max(Math.max(d, u), Math.max(r, l));
    }
}
