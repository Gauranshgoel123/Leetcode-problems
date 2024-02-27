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