class Solution {
    public int[] resultsArray(int[][] queries, int k) {
        int[] ans = new int[queries.length];
        PriorityQueue<Integer> maxheap=new PriorityQueue<>((a,b)->b-a);
        for(int i=0;i<queries.length;i++){
            int x=Math.abs(queries[i][0]);
            int y=Math.abs(queries[i][1]);
            int distance=x+y;
            if(maxheap.size()<k){
                maxheap.offer(distance);
            }
            else if(distance<maxheap.peek()){
                maxheap.poll();
                maxheap.offer(distance);
            }
            if(maxheap.size()<k){
                ans[i]=-1;
            }
            else{
                ans[i]=maxheap.peek();
            }
        }
        return ans;
    }
}
