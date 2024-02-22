// ✅✅4 ways to solve | Least to Most Efficient | Explained 🔥🔥


// C++
// There is a Recorded Runtime Comparison Table to Understand how efficient each approach is. So don't forget to check that out.

// Intuition
// The problem requires identifying the first unique character in the given string.

// The intuition behind the solution is to count the frequency of each character in the string and then iterate through the string to find the first character with a frequency of 1.

// Approaches
// Brute Force
// Using nested for loops to check for each character if it occurs again in the string s.

// class Solution {
// public:
//     int firstUniqChar(string s) {
//         for(int i=0; i<s.size(); i++){
//             bool appears_again = false;
//             for(int j=0; j<s.size(); j++){
//                 if(i != j && s[i] == s[j]){
//                     appears_again = true;
//                     break;
//                 }
//             }
//             if(!appears_again) return i;
//         }
//         return -1;
//     }
// };
// Brute Force Solution Complexity
// Time complexity: O(N*N)
// Space complexity: O(1)
// Using Ordered Map
// Using a map to store the frequency of each character. The map ensures that characters are ordered by their occurrence in the string.

// class Solution {
// public:
//     int firstUniqChar(string s) {
//         map<char, int> freq;
//         for(auto ch : s){
//             freq[ch]++;
//         }
//         for(int i=0; i<s.size(); i++){
//             if(freq[s[i]] == 1) return i;
//         }
//         return -1;
//     }
// };
// Ordered Map Complexity
// Time complexity: O(N*log(N))
// Space complexity: O(1)
// Using Unordered Map
// Using a hash map to store the frequency of each character. It uses a hashing function to store a key-value pair, due to which the average time complexity for searching a key-value pair becomes O(1).

// class Solution {
// public:
//     int firstUniqChar(string s) {
//         unordered_map<char, int> freq;
//         for(auto ch : s){
//             freq[ch]++;
//         }
//         for(int i=0; i<s.size(); i++){
//             if(freq[s[i]] == 1) return i;
//         }
//         return -1;
//     }
// };
// Unordered Map Complexity
// Time complexity: O(N) Average
// Space complexity: O(1)
// Using Frequency Array
// Using a vector as a frequency array to store the count of each character. Assumes the input string only contains lowercase letters which is given in constraints.

// class Solution {
// public:
//     int firstUniqChar(string s) {
//         vector<int> freq(26, 0);
//         for(auto ch : s){
//             freq[ch - 'a']++;
//         }
//         for(int i=0; i<s.size(); i++){
//             if(freq[s[i] - 'a'] == 1) return i;
//         }
//         return -1;
//     }
// };
// Frequency Array Complexity
// Time complexity: O(N)
// Space complexity: O(1)
// Runtime Comparison Table
// Method	Runtime (ms)
// Brute Force	39 (Leetcode is just buggy)
// Ordered Map	61
// Unordered Map	36
// Frequency Array	16
// The table above provides a runtime comparison of the three different methods.
// The frequency array approach shows the lowest runtime, making it the most efficient solution among the three.
class Solution {
public:
    int firstUniqChar(string s) {
        int hash[256]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(hash[s[i]]==1) return i;
        }
        return -1;
    }
};
