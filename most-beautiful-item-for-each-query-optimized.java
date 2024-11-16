class Solution {
    public int[] maximumBeauty(int[][] items, int[] queries) {
        Arrays.sort(items,(a,b)->b[1]-a[1]);
        //items = {{5, 6}, {3, 5}, {2, 4}, {1, 2}, {3, 2}};
        // sorts a 2D array (items) in descending order based on the second element ([1]) of each sub-array.
        int[] ans=new int[queries.length];
        for(int i=0;i<queries.length;i++){
            boolean flag=false;
            for(int j=0;j<items.length;j++){
                int p=items[j][0];
                int b=items[j][1];
                if(p<=queries[i]){
                    flag=true;
                    ans[i]=b;
                    break;
                }
            }
            if(flag==false){
                ans[i]=0;
            }
        }
        return ans;
    }
}
