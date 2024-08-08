class Solution {
    public int[][] spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int[][] dir=new int[][] {{0,1},{1,0},{0,-1},{-1,0}};
        int[][] ans=new int[rows*cols][2];
        int step=1;
        int direction=0;
        int idx=0;
        int r=rStart;
        int c=cStart;
        while(idx<(rows*cols)){
            for(int i=0;i<2;i++){
                int dr=dir[direction][0];
                int dc=dir[direction][1];
                for(int j=0;j<step;j++){
                    if(r>=0 && r<rows && c>=0 && c<cols){
                        ans[idx][0]=r;
                        ans[idx][1]=c;
                        idx++;
                    }
                    r=r+dr;
                    c=c+dc;
                }
                direction=(direction+1)%4;
            }
            step++;
        }
        return ans;
    }
}
