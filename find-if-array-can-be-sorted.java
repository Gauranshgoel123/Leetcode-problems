class Solution {
    public boolean canSortArray(int[] nums) {
        int prevmax=0;
        int i=0;
        while(i<nums.length){
            int count=Integer.bitCount(nums[i]);
            int j=i+1;
            int min=nums[i];
            int max=nums[i];
            while(j<nums.length && Integer.bitCount(nums[j])==count){
                min=Math.min(min,nums[j]);
                max=Math.max(max,nums[j]);
                j++;
            }
            if(prevmax>min){
                return false;
            }
            prevmax=max;
            i=j;
        }
        return true;
    }
}


// BEATS 22%
// class Solution {
//     public boolean canSortArray(int[] nums) {
//         int[] arr=Arrays.copyOf(nums,nums.length);
//         for(int i=0;i<arr.length;i++){
//             for(int j=0;j<arr.length-i-1;j++){
//                 if(arr[j]<arr[j+1]) continue;
//                 else{
//                     if(Integer.bitCount(arr[j])==Integer.bitCount(arr[j+1])){
//                         int temp=arr[j];
//                         arr[j]=arr[j+1];
//                         arr[j+1]=temp;
//                     }
//                     else{
//                         return false;
//                     }
//                 }
//             }
//         }
//         return true;

//     }
// }
