class Solution {
    public void rotate(int[][] matrix) {
        //brute force not in place
        // int n=matrix.length;
        // int[][] ans=new int[n][n];
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<matrix[i].length;j++){
        //         ans[j][n-1-i]=matrix[i][j];
        //     }
        // }
        // return ans;
        //transpose
        int n=matrix.length;
        int temp=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        //reverse each row
        for(int i=0;i<n;i++){
            int start = 0;
            int end = n-1;
            while (start < end) {
                int temp1 = matrix[i][start];
                matrix[i][start] = matrix[i][end];
                matrix[i][end] = temp1;
                start++;
                end--;
            }
        }
    }
}
