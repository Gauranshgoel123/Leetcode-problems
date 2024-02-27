// class Solution {
//     public int[] leftRightDifference(int[] nums) {
//         int n = nums.length;
//         int[] answer = new int[n];
//         int[] leftSum = new int[n];
//         int[] rightSum = new int[n];
//         int left = 0;
//         int right = n-1; 
//         for(int i=0;i<n;i++){
//             for(int j=0;j<=i-1;j++){
//                 leftSum[i]+=nums[j];
//             }
//             for(int j=i+1;j<=n-1;j++){
//                 rightSum[i]+=nums[j];
//             }
//         }
//         for(int i=0;i<nums.length;i++){
//             if(leftSum[i]>rightSum[i]) answer[i]=leftSum[i]-rightSum[i];
//             else answer[i]=rightSum[i]-leftSum[i];
//         }
//         return answer;
//     }
// }

class Solution {
    public int[] leftRightDifference(int[] nums) {
        int n = nums.length;
        int[] answer = new int[n];
        int right = 0; 
        // Calculate the sum of all elements in the array
        for(int i=0;i<n;i++){
            right+=nums[i];
        }
        int left = 0;
        for(int i=0;i<n;i++){
            right-=nums[i];// Subtract the current element from the right sum
            answer[i] = Math.abs(left-right);// Calculate the absolute difference and store it
            left+=nums[i];// Add the current element to the left sum
        }
        return answer;
    }
}
