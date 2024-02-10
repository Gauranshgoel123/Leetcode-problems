class Solution {
    public int countSubstrings(String s) {
        int n = s.length();
        int ans = 0;
        //avoid nested loops to reduce runtime
        for (int i = 0; i < n; i++) {
            ans += countOfPalindrome(i, i, s) + countOfPalindrome(i, i + 1, s);
        }
        return ans;
    }

    //use easy charAt() fucntion to check if pallindrome or not
    //2pointer approach

    public int countOfPalindrome(int leftIndex, int rightIndex, String str) {
        int count = 0;
        int n = str.length();
        while (leftIndex >= 0 && rightIndex < n && str.charAt(leftIndex) == str.charAt(rightIndex)) {
            count++;
            leftIndex--;
            rightIndex++;
        }
        return count;
    }
}