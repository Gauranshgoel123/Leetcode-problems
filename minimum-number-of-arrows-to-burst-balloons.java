class Solution {
    public int findMinArrowShots(int[][] points) {
        //to sort 1d array
        // Arrays.sort(points);
         // Sorting the 2D array
        Arrays.sort(points, (a,b) -> Integer.compare(a[0], b[0]));\
        //another moethod to sort 2D array
        // Arrays.sort(points, new Comparator<int[]>() {
        //       public int compare(final int[] entry1, final int[] entry2) {
        //           final int firstValue1 = entry1[0];
        //           final int firstValue2 = entry2[0];
        //           return Integer.compare(firstValue1, firstValue2);
        //       }
        //   });

        int arrows=1;
        int end=points[0][1];
        for(int i=0; i < points.length ; i++){
            int currstart=points[i][0];
            int currend=points[i][1];
            if(currstart>end){
                arrows++;
                end=currend;
            }
            else{
                end=Math.min(end,currend);
            }
        }
        return arrows;
    }
}
