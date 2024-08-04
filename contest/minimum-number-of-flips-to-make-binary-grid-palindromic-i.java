class Solution {
    public int minFlips(int[][] grid) {
        //mxn m is row n is coloumn
        int m=grid.length;
        int n=grid[0].length;
        if(n==1||m==1){
            return 0;
        }
        return Math.min(rowpallindrome(grid,m,n),colpallindrome(grid,m,n));
    }
    public int rowpallindrome(int[][] grid, int m, int n){
        int count_row=0;
        for(int i=0;i<m;i++){
            count_row+=flips(grid[i]);
        }
        return count_row;
    }
    public int flips(int[] grid){
        int count=0;
        int n=grid.length;
        for(int i=0;i<n/2;i++){
            if(grid[i]!=grid[n-1-i]){
                count++;
            }
        }
        return count;
    }
    public int colpallindrome(int[][] grid,int m,int n){
        int count_col=0;
        for(int i=0;i<n;i++){
            int[] col=new int[m];
            for(int j=0;j<m;j++){
                col[j]=grid[j][i];
            }
            count_col+=flips(col);
        }
        return count_col;
    }
}
