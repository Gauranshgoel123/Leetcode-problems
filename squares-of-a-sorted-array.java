Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
Example 2:

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
 // Approach 2(Sort Function)
// Squared and stored the values in same array.
// Used Sort Funciton
// Complexity
// Time complexity:
// O(nlogn)O(nlogn)O(nlogn)

// Space complexity:
// O(1)O(1)O(1)

// Code


// class Solution {
//     public int[] sortedSquares(int[] nums) {
//         for (int i = 0; i < nums.length; i++) {
//             nums[i] = nums[i] * nums[i];
//         }
//         Arrays.sort(nums);
//         return nums;
//     }
// }



// Approach 3( 2 Pointer )
// 1. Since the original array is not sorted, it's not guaranteed 
//     that the largest elements (in terms of absolute value) 
//     are at the ends of the array.

// 1. By iterating backwards from the end of the array, we can 
//     start populating the result array from the end, ensuring 
//     that the squares of larger elements occupy the higher 
//     indices of the result array.
// Complexity
// Time complexity:
// O(n)O(n)O(n)

// Space complexity:
// O(n)O(n)O(n)
class Solution {
    public int[] sortedSquares(int[] nums) {
        int n = nums.length;
        int[] ans = new int[n];
        int start = 0, end = n - 1;
        for (int i = n - 1; i >= 0; i--) {
            if (Math.abs(nums[start]) >= Math.abs(nums[end])) {
                ans[i] = nums[start] * nums[start];
                start++;
            } else {
                ans[i] = nums[end] * nums[end];
                end--;
            }
        }
        return ans;
    }
}
