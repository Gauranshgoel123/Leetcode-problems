class Solution {
    public int numMagicSquaresInside(int[][] grid) {
        //1+2+3+4+...+9=15  each row sum = each col sum = each diagnol sum
        int count=0;
        if(grid.length<3 || grid[0].length<3) return 0;
        for(int i=0;i<grid.length-2;i++){
            for(int j=0;j<grid[0].length-2;j++){
                if(magic(grid,i,j)) count++;
            }
        }
        return count;
    }
    public boolean magic(int[][] grid,int x,int y){
        //check number in magic grid is between 1-9
        boolean[] visited=new boolean[16];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                int num=grid[x+i][y+j];
                if(num<1 || num>9) return false;
                if(visited[num]) return false;
                visited[num]=true;
            }
        }
        //check col sum
        int col1=grid[x][y]+grid[x+1][y]+grid[x+2][y];
        int col2=grid[x][y+1]+grid[x+1][y+1]+grid[x+2][y+1];
        int col3=grid[x][y+2]+grid[x+1][y+2]+grid[x+2][y+2];
        if(col1!=col2 && col2!=col3 && col1!=col3){ return false; }
        //check row sum
        int row1=grid[x][y]+grid[x][y+1]+grid[x][y+2];
        int row2=grid[x+1][y]+grid[x+1][y+1]+grid[x+1][y+2];
        int row3=grid[x+2][y]+grid[x+2][y+1]+grid[x+2][y+2];
        if(row1!=row2 && row2!=row3 && row1!=row3){ return false; }
        //check diagnol sum
        int d1=grid[x][y]+grid[x+1][y+1]+grid[x+2][y+2];
        int d2=grid[x][y+2]+grid[x+1][y+1]+grid[x+2][y];
        if(d1!=d2) return false;
        return true;
    }
}
