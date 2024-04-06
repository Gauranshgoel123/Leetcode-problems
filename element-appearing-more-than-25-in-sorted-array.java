// Since the array is in sorted oder. We can leverage this fact and check what was the number or say element n/4 steps back from current index while traversing the array form left to right
class Solution {
    public int findSpecialInteger(int[] arr) {
        int sz=arr.length, freq=sz/4;
        for(int i = 0 ; i<sz ; i++){
            if(i-freq>=0 && arr[i-freq]==arr[i])
                return arr[i];
        }
        return -1;
    }
}
