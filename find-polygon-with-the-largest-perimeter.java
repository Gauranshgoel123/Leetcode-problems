// Approach 2 ( With Forward Iteration )
// Sort the array: Start by sorting the array of numbers in ascending order.

// Initialize variables: Set up variables to track the running sum (sum) and the largest perimeter found so far (ans).

// Iterate through the sorted array: Loop through each number in the sorted array.

// Check polygon condition: For each number, check if it's smaller than the sum of all previous numbers encountered.

// Update largest perimeter: If the condition is met, update ans with the sum of the current number and the running sum. Finally, return the largest perimeter found (ans).

// Complexity
// Time complexity:
// O(nlogn)O(nlogn)O(nlogn)

// Space complexity:
// O(1)O(1)O(1)
class Solution {
    public long largestPerimeter(int[] nums) {
        Arrays.sort(nums);
        long sum=0;
        long ans=-1;
        for(int i=0;i<nums.length;i++){
            if(nums[i]<sum) ans = nums[i] + sum;
            sum += nums[i];
        }
        return ans;
    }
}