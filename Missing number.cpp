class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() + 1;
        int expectedSum = (n * (n - 1)) / 2;
        for (int n : nums) expectedSum -= n;
        return expectedSum;
    }
};
