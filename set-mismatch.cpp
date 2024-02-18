//Brute force
// class Solution {
// public:
//     vector<int> findErrorNums(vector<int>& nums) {
//         //Brute Force
//         //Initialize variables dup and missing to -1. These will be used to store the duplicate and missing numbers.
//         int dup=-1;
//         int missing=-1;
//         for(int i=1;i<=nums.size();i++){
//             int count=0;
//             for (int j=0;j<nums.size();j++){
//                 if(nums[j]==i){
//                     count++;
//                 }
//             }
//             if(count==2){
//                 dup=i;
//             }
//             else if( count ==0){
//                 missing=i;
//             }
//         }
//         return {dup,missing};
//     }
// };


// Calculate Expected Sum:
// Calculate the expected sum of numbers from 1 to n using the formula (n * (n + 1)) / 2. This assumes no duplicates and no missing numbers.
// Calculate Array and Unique Sums:
// Calculate the sum of all elements in the array (array_sum).
// Use an unordered_set (s) to get the unique elements in the array and calculate their sum (unique_sum).
// Find Missing and Duplicate:

// The difference between the expected sum and the unique sum gives the missing number (missing).
// The difference between the array sum and the unique sum gives the duplicate number (duplicate).
// Return Result:

// Return a vector containing the duplicate and missing numbers.

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int actual_sum = n * (n + 1) / 2;
        int array_sum = 0;
        int unique_sum = 0;
        unordered_set<int> s(nums.begin(), nums.end());

        for (int a : nums) {
            array_sum += a;
        }


        for (int a : s) {
            unique_sum += a;
        }

        int missing = actual_sum - unique_sum;
        int duplicate = array_sum - unique_sum;

        return {duplicate, missing};
    }
};


