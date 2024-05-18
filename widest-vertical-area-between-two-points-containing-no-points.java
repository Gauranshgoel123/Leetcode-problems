class Solution {
    public int maxWidthOfVerticalArea(int[][] points) {
        int n=points.length;
        int[] xpoint=new int[n];
        for(int i=0;i<n;i++){
            xpoint[i]=points[i][0];
        }
        Arrays.sort(xpoint);
        int ans=0;
        for(int i=0;i<n-1;i++){
            ans=Math.max(ans,xpoint[i+1]-xpoint[i]);
        }
        return ans;
    }
}

// class Solution {
//     public int maxWidthOfVerticalArea(int[][] points) {
//         Arrays.sort(points,(a,b) -> (a[0]-b[0]));
//         int ans=0;
//         int n=points.length;
//         for(int i=0;i<n-1;i++){
//             ans=Math.max(ans,points[i+1][0]-points[i][0]);
//         }
//         return ans;
//     }
// }
