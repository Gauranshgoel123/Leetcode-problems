// Approach
// Initialize a hash map to store prefix sums along with their indices.
// Initialize variables for sum, maximum subarray length, and iterate through the input array.
// For each element in the array, update the sum according to the element (decrement by 1 for 0, increment by 1 for 1).
// If the sum becomes zero at any index, update the maximum length to the current index plus one.
// If the sum is encountered again (which means there is a subarray with equal 0s and 1s between the previous occurrence and the current index), update the maximum length if the current subarray length is greater than the previously stored maximum length.
// Return the maximum subarray length.
// Complexity Analysis
// Time complexity: (O(n)), where (n) is the length of the input array. We traverse the array only once.
// Space complexity: (O(n)), in the worst case, when all elements are distinct and the sum becomes distinct for each index, we would need to store all prefix sums in the hash map.

class Solution {
    public int findMaxLength(int[] nums) {
        int n=nums.length;
        Map<Integer,Integer> mp = new HashMap<>();
        int sum=0;
        int subarr=0;
        for(int i=0;i<n;i++){
            sum += nums[i] == 0 ? -1 : +1;
            if(sum==0){
                subarr=i+1;
            }
            else if(mp.containsKey(sum)){
                subarr=Math.max(subarr,i-mp.get(sum));
            }
            else{
                mp.put(sum,i);
            }
        } 
        return subarr;
    }
}
