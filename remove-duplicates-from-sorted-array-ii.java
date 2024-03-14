//The approach employs a two-pointer strategy. 
//The variable j is used to keep track of the current position in the modified array where elements are being stored without violating the constraint. 
//The loop iterates through the array, and for each element, it checks whether it is the same as the element two positions behind the current j.
//If it is, it means there are already two occurrences of this element in the modified array, and we should skip adding another one to adhere to the constraint. 
//Otherwise, the element is added to the modified array at position j, and j is incremented.
class Solution {
    public int removeDuplicates(int[] nums) {
        if (nums.length == 0) return 0;
        int j  = 1;
        for(int i = 1; i < nums.length; i++){
            if(j == 1 || nums[i] != nums[j-2]){
                nums[j++] = nums[i];
            }
        }
        return j;
    }
}
