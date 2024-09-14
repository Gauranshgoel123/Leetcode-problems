class Solution {
    public int[] xorQueries(int[] arr, int[][] queries) {
        int[] prev=new int[arr.length];
        int[] res=new int[queries.length];
        prev[0]=arr[0];
        for(int i=1;i<arr.length;i++){
            prev[i]=arr[i]^prev[i-1];
        }
        for(int i=0;i<queries.length;i++){
            int left=queries[i][0];
            int right=queries[i][1];
            if(left==0) res[i]=prev[right];
            else res[i]=prev[right]^prev[left-1];
        }
        return res;
    }
}
