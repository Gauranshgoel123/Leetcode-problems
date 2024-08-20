class Solution {
    public int minSteps(int n) {
        if(n == 1) return 0;
        return sumOfPrimeFactors(n);
    }
    public static int sumOfPrimeFactors(int number) {
        int sum = 0;
        while (number % 2 == 0) {
            sum += 2;
            number /= 2;
        }
        for (int i = 3; i <= Math.sqrt(number); i += 2) {
            while (number % i == 0) {
                sum += i;
                number /= i;
            }
        }
        if (number > 2) {
            sum += number;
        }
        return sum;
    }
}
// Prime Factorization:
// First, the program checks for the smallest prime factor, which is 2, and divides the number until it can't be divided further.
// Then, it checks for other odd factors, starting from 3.
// If the remaining number after division is greater than 2, it is a prime factor itself and is added to the sum.
