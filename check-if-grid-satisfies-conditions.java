class Solution {
    public boolean satisfiesConditions(int[][] grid) {
        for(int r=0;r<grid.length;r++){
            for(int c=0;c<grid[r].length;c++){
                if(r<grid.length-1 &&  grid[r][c] != grid[r + 1][c]){
                    return false;
                }
                if(c<grid[r].length-1 &&  grid[r][c] == grid[r][c+1]){
                    return false;
                }
            }
        }
        return true;
    }
}
