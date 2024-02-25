public class Solution {
    int[] dp = new int[46];
    
    public int solve(int n) {
        if (n < 0) {
            return 0;
        }
        if (n == 0) {
            return 1;
        }
        if (dp[n] != -1) {
            return dp[n];
        }
        return dp[n] = solve(n - 1) + solve(n - 2);
    }
    
    public int climbStairs(int n) {
        // Initialize dp array with -1
        for (int i = 0; i < dp.length; i++) {
            dp[i] = -1;
        }
        // Call solve function
        return solve(n);
    }
}
