class Solution {
    public int diagonalPrime(int[][] nums) {
        int n = nums.length;
        int max=0;
        for(int i=0;i<n;i++){
            if(nums[i][i]>max && isprime(nums[i][i])){
                max=nums[i][i];
            }
            if(nums[i][n-i-1]>max && isprime(nums[i][n-i-1])){
                max=nums[i][n-i-1];
            }
        }
        return max;
    }
    private boolean isprime(int n){
        if(n<2) return false;
        for(int i=2;i<=Math.sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
}
