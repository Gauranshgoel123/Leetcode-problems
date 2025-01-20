class Solution {
    public int firstCompleteIndex(int[] arr, int[][] mat) {
        int row=mat.length;
        int col=mat[0].length;
        Map<Integer,int[]> map=new HashMap<>();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                map.put(mat[i][j],new int[]{i,j});
            }
        }
        int[] rowcount=new int[row];
        int[] colcount=new int[col];
        Arrays.fill(rowcount,col);
        Arrays.fill(colcount,row);
        
        for(int i=0;i<arr.length;i++){
            int[] pos=map.get(arr[i]);
            if(--rowcount[pos[0]]==0 || --colcount[pos[1]]==0) return i;
        }
        return -1;
    }
}



/*
mat = [[3,2,5],[1,4,6],[8,7,9]]

arr = [2,8,7,4,1,3,5,6,9], 
       0 1 2 3 4 5 6 7 8

first three computed normally
       2 done
       8 done
       7 done

       check now onwards if on computing any row or coloumn
       is formed








*/
