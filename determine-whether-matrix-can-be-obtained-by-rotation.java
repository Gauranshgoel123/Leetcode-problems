class Solution {
    public boolean findRotation(int[][] matrix, int[][] target) {
        //check upto 3 times coz we can rotate any matrix by 90degrees atmost 3 times only
        for(int k=0;k<4;k++){
            matrix=transpose(matrix);
            matrix=revrow(matrix);
            if(eqq(matrix,target)==true){
                return true;
            }
        }
        return false;
    }
    public static int[][] transpose(int[][] matrix){
        // int[][] ans=new int[matrix[0].length][matrix.length];
        // for(int i=0;i<matrix.length;i++){
        //     for(int j=0;j<matrix[0].length;j++){
        //         ans[i][j]=matrix[j][i];
        //     }
        // }
        // return ans;
        int n=matrix.length;
        int temp=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        return matrix;
    }
    public static int[][] revrow(int[][] matrix){
        int n=matrix.length;
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
        return matrix;
    }
    public static boolean eqq(int[][] matrix, int[][] target){
        int n=matrix.length;
        for(int i=0;i<n;i++){
            for(int j=0;j<matrix[0].length;j++){
                if(target[i][j]!=matrix[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
}
