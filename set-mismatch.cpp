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
static const auto _ = []() {
  std::ios::sync_with_stdio(false);
  std::cout.tie(nullptr);
  std::cin.tie(nullptr);
  return nullptr;
}();


class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        const auto n = nums.size();
        const long int actual_sum =n*(n+1)/2;
        long int array_sum = 0;
        std::vector<bool> occurences(n+1, false);
        int dupl = -1;
        for(const auto &i : nums) {
            if(occurences[i]) {
                dupl = i;
            }
            occurences[i] = true;
            array_sum += i;
        }

        array_sum -= dupl;
        
        
        return {dupl,static_cast<int>(actual_sum-array_sum)};
    }
};

