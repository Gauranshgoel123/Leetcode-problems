//beats 100% runtime
class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] ans = new int[nums.length];
        int leftprod=1;
        for(int i=0;i<nums.length;i++){
            ans[i]=leftprod;
            leftprod=leftprod*nums[i];
        }
        int rightprod=1;
        for(int i=nums.length-1;i>=0;i--){
            ans[i]=ans[i]*rightprod;
            rightprod=rightprod*nums[i];
        }
        return ans;
    }
}

//beats 50%solution
// class Solution {
//     public int[] productExceptSelf(int[] nums) {
//         int n = nums.length;
//         //initiliase output array and fill with zero
//         int[] ans = new int[n];
//         Arrays.fill(ans,0);
//         int zeroes=0;
//         int product=1;
//         //calculate product and number of zeores
//         for(int num : nums) {
//             if(num != 0){
//                 product=product*num;
//                 continue;
//             }
//             if(num == 0) zeroes++;
//         }
//         for(int i=0;i<n;i++){
//             if(zeroes == 1){
//                 if(nums[i] == 0){
//                     ans[i]=product;
//                 }
//                 else{
//                     ans[i]=0;
//                 }
//             }
//             else if(zeroes == 0){
//                 ans[i] = product/nums[i];
//             }
//             //if number of zeroes is >=2
//             else{
//                 ans[i] = 0;
//             }
//         }
//         return ans;     
//     }
// }
