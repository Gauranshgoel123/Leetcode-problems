class Solution {
    public int numIslands(char[][] grid) {
        int rows=grid.length;
        int cols=grid[0].length;
        int island=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]=='1'){
                    island++;
                    //check all connected 1s if not then ;
                    helper(grid,i,j);
                }
            }
        }
        return island;
    }
    public void helper(char[][] grid,int i,int j){
        if(i<0||j<0||i>=grid.length||j>=grid[0].length||grid[i][j]=='0'){
            return;
        }
        grid[i][j]='0'; // mark as visited
        helper(grid,i-1,j);
        helper(grid,i,j+1);
        helper(grid,i+1,j);
        helper(grid,i,j-1);
    }
}
