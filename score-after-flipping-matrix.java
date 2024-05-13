class Solution {
    public int matrixScore(int[][] grid) {
        ////flip row if needed to max score i.e if first dig is 0
        for(int row=0;row<grid.length;row++){
            if(grid[row][0]==0){
                flipRow(grid,row);
            }
        }

        int power=grid[0].length-1;
        int score=(int)(grid.length*Math.pow(2,power));
        power--;

        //calculate score for each coloumn
        for(int col=1;col<grid[0].length;col++){
            int count1=count1(grid,col);
            int count0=grid.length-count1;
            score+=(int)(Math.max(count0,count1)*Math.pow(2,power));
            power--;
        }
        return score;
    }

    public static void flipRow(int[][] grid,int row){
        for(int col=0;col<grid[0].length;col++){
            grid[row][col]=(grid[row][col] == 1)?0:1;
        }
    }

    public static int count1(int[][] grid,int col){
        int count=0;
        for(int row=0;row<grid.length;row++){
            count+=(grid[row][col]==1)?1:0;
        }
        return count;
    }
}
