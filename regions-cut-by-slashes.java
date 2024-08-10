class Solution {
    public int regionsBySlashes(String[] grid) {
        int n=grid.length;
        int[][] expanded=new int[n*3][n*3];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int baserow=i*3;
                int basecol=j*3;
                if(grid[i].charAt(j)=='\\'){
                    expanded[baserow][basecol]=1;
                    expanded[baserow+1][basecol+1]=1;
                    expanded[baserow+2][basecol+2]=1;
                }
                if(grid[i].charAt(j)=='/'){
                    expanded[baserow][basecol+2]=1;
                    expanded[baserow+1][basecol+1]=1;
                    expanded[baserow+2][basecol]=1;
                }                
            }
        }
        int rows=expanded.length;
        int cols=expanded[0].length;
        int island=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(expanded[i][j]==0){
                    helper(expanded,i,j);
                    island++;
                }
            }
        }
        return island;
    }
    public void helper(int[][] expanded,int i,int j){
        if(i<0||j<0||i>=expanded.length||j>=expanded[0].length||expanded[i][j]==1){
            return;
        }
        expanded[i][j]=1;
        helper(expanded,i-1,j);
        helper(expanded,i,j+1);
        helper(expanded,i+1,j);
        helper(expanded,i,j-1);
    }
}
