// Intuition to Code:

// Understanding the Problem:

// Initially, we need to understand the problem statement clearly. We're given a string and we're supposed to find the minimum length of the string after removing characters from both ends while ensuring that the resulting string is still a palindrome.
// Breaking Down the Task:

// To solve this problem, we need to iterate through the string from both ends, removing matching characters until we find a non-matching pair.
// We'll update two pointers, one starting from the beginning of the string (left) and the other starting from the end of the string (right).
// Whenever we find matching characters at left and right, we increment left and decrement right to move towards the center of the string.
// We repeat this process until we encounter non-matching characters or until left becomes greater than or equal to right.
// Implementing the Approach:

// Implement a while loop that runs until left is less than right.
// Inside the loop, check if the characters at left and right match. If they do, increment left and decrement right.
// If the characters at left and right don't match, break out of the loop.
// After the loop ends, return the length of the remaining substring, which is right - left + 1.

// Approach:

// Initialize two pointers, left and right, at the start and end of the string respectively.
// While left is less than right and the characters at these positions match, we continue to move towards the center of the string.
// Inside the loop, we maintain a current character, check if the characters at left and right match, and update the pointers accordingly.
// Once the loop breaks, we return the length of the remaining substring, which is right - left + 1.
// Complexity:

// Time complexity:
// This approach iterates through the string once, hence the time complexity is O(n), where n is the length of the input string.
// Space complexity:
// This approach uses only a constant amount of extra space, hence the space complexity is O(1).

class Solution {
    public int minimumLength(String s) {
        int left=0;
        int right=s.length()-1;
        while( left < right && s.charAt(left) == s.charAt(right)){
            char current=s.charAt(left);
            while(left<=right && s.charAt(left) == current){
                left++;
            }
            while(right>=left && s.charAt(right) == current){
                right--;
            }
        }
        return right-left+1;
    }
}
