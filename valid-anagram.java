// Initializing Frequency Array:

// int[] freq = new int[26];
// Here, an integer array freq of size 26 is created. This array is used to store the frequency of each character in the input strings. Each index corresponds to a character, with index 0 representing 'a', index 1 representing 'b', and so on.

// Counting Frequencies in String s:

// for(char ch : s.toCharArray()){
//     freq[ch-'a'] += 1;
// }
// This loop iterates through each character of string s. For each character, it calculates its position in the freq array by subtracting the ASCII value of 'a' from the character's ASCII value. Then, it increments the count of that character in the freq array.

// Decrementing Frequencies in String t:

// for(char ch : t.toCharArray()){
//     freq[ch-'a'] -= 1;
// }
// Similar to the previous loop, this loop iterates through each character of string t. For each character, it decrements the count of that character in the freq array.

// Checking if Frequencies are Zero:

// for(int i : freq){
//     if(i!=0){
//         return false;
//     }
// }
// After processing both strings, this loop checks if there are any non-zero values in the freq array. If any non-zero value is found, it means that the frequencies of characters in s and t are not the same, so the method returns false, indicating that s and t are not anagrams.

class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length()) return false;
        int[] freq= new int[26];
        for(char ch:s.toCharArray()){
            freq[ch-'a'] +=1;
        }
        for(char ch:t.toCharArray()){
            freq[ch-'a'] -=1;
        }
        for(int i:freq){
            if(i!=0) return false;
        }
        return true;
    }
}
