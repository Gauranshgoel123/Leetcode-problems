class Solution {
    int m;  
    int n;  
    boolean isSubIsland; 
    public void dfs(int[][] grid1, int[][] grid2, int i, int j) {
        if (i < 0 || i == m || j < 0 || j == n || grid2[i][j] == 0) return;
        if (grid1[i][j] == 0) {
            isSubIsland = false;
        }
        grid2[i][j] = 0;
        dfs(grid1, grid2, i + 1, j); 
        dfs(grid1, grid2, i - 1, j); 
        dfs(grid1, grid2, i, j + 1); 
        dfs(grid1, grid2, i, j - 1); 
    }

    public int countSubIslands(int[][] grid1, int[][] grid2) {
        m = grid1.length;    
        n = grid1[0].length; 
        int subIslandCount = 0;  
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid2[i][j] == 1) {
                    isSubIsland = true;  
                    dfs(grid1, grid2, i, j);  
                    if (isSubIsland) {
                        subIslandCount++; 
                    }
                }
            }
        }
        return subIslandCount;  
    }
}
