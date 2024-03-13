class Solution {
    public int pivotInteger(int n) {
        int start=1 ;
        int end=n;
        int fullsum=(n*(n+1)/2);
        while(start<=end){
            int pivot=start+(end-start)/2;
            int leftsum=(pivot*(pivot+1)/2);
            int rightsum=fullsum-leftsum+pivot;
            if(leftsum==rightsum){
                return pivot;
            }
            else if(leftsum<rightsum){
                start = pivot + 1;
            }
            else{
                end = pivot - 1;
            }
        }
        return -1;           
    }
}
