// Approach 1
// Initialize an empty 2D list called list to store the sub-lists.
// Initialize a variable count to keep track of the number of elements processed.
// Use a while loop to iterate until all the elements in the nums array are processed.
// Inside the loop, initialize a new sub-list ans to store unique integers from nums array.
// For each element nums[i], if its not already present in the ans list, add it to ans, set nums[i] to zero (to mark it as processed), and increment count.
// On reaching the end of nums array, add the ans list to the 2D list.
// Continue this process until all elements of nums are processed.


// class Solution {
//     public List<List<Integer>> findMatrix(int[] nums) {
//         List<List<Integer>> list=new ArrayList<>();
//         int count=0;
//         while(count<nums.length){
//             ArrayList<Integer> ans=new ArrayList<>();
//             for(int i=0;i<nums.length;i++){
//                 if(nums[i]!=0 && !ans.contains(nums[i])){
//                     ans.add(nums[i]);
//                     nums[i]=0;
//                     count++;
//                 }
//             }
//             list.add(ans);
//         }
//         return list;
//     }
// }


// This is a more optimized approach to achieve the same result.
// Initialize an empty 2D list called list to store the sub-lists.
// Initialize an integer array count of size nums.length + 1 to keep track of the count of each unique integer encountered in nums.
// Iterate through each element i in the array nums.
// Check if the count of the current integer i is equal to the size of the list. If it is, this implies that we have to add a new empty sub-list to list.
// Add the current integer i to the appropriate sub-list in list, determined by its count stored in the count array.
// Continue this process for all elements in the nums array.
class Solution {
    public List<List<Integer>> findMatrix(int[] nums) {
        List<List<Integer>> list=new ArrayList<>();
        int[] count=new int[nums.length+1];
        for(int i:nums){
            if(count[i]==list.size()){
                list.add(new ArrayList<>());
            }
            list.get(count[i]).add(i);
            count[i]++;
        }
        return list;
    }
}
