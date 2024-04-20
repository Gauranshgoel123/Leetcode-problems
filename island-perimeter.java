class Solution {
    public int islandPerimeter(int[][] grid) {
        int rows = grid.length;
        int cols = grid[0].length;
        int perimeter = 0;

        // Iterate through each cell in the grid
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                // If the cell is land (grid[i][j] = 1)
                if (grid[i][j] == 1) {
                    // Check the four sides (top, bottom, left, right)
                    // Increment perimeter if the side is out of bounds or adjacent to water (0)
                    // Top
                    if (i == 0 || grid[i - 1][j] == 0) {
                        perimeter++;
                    }
                    // Bottom
                    if (i == rows - 1 || grid[i + 1][j] == 0) {
                        perimeter++;
                    }
                    // Left
                    if (j == 0 || grid[i][j - 1] == 0) {
                        perimeter++;
                    }
                    // Right
                    if (j == cols - 1 || grid[i][j + 1] == 0) {
                        perimeter++;
                    }
                }
            }
        }

        return perimeter;

    }
}
