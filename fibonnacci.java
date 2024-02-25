class Solution {
    int[] memo;
    public int fib(int n) {
        memo = new int[n + 1];
        return f(n);
    }
    public int f(int n) {
        if (n == 0 || n == 1) {
            memo[n] = n;
            return n;
        }
        if (memo[n] != 0) {
            return memo[n];
        }
        memo[n] = f(n - 1) + f(n - 2);
        return memo[n];
    }
}